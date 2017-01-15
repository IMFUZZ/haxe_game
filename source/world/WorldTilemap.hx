package world;

import flixel.tile.*;
import flixel.addons.nape.FlxNapeTilemap;
import flash.display.BitmapData;
import flash.display.Graphics;
import flash.geom.Point;
import flash.geom.Rectangle;
import flixel.FlxBasic;
import flixel.FlxCamera;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.graphics.FlxGraphic;
import flixel.graphics.frames.FlxFrame;
import flixel.graphics.frames.FlxFramesCollection;
import flixel.graphics.frames.FlxImageFrame;
import flixel.graphics.frames.FlxTileFrames;
import flixel.math.FlxMath;
import flixel.math.FlxMatrix;
import flixel.math.FlxPoint;
import flixel.math.FlxRect;
import flixel.system.FlxAssets.FlxTilemapGraphicAsset;
import flixel.util.FlxColor;
import flixel.util.FlxDestroyUtil;
import flixel.util.FlxSpriteUtil;
import openfl.display.BlendMode;
import openfl.geom.ColorTransform;
using flixel.util.FlxColorTransformUtil;


class WorldTilemap extends FlxNapeTilemap {
	
	/**
	 * Internal function that actually renders the tilemap to the tilemap buffer. Called by draw().
	 * 
	 * @param	Buffer		The FlxTilemapBuffer you are rendering to.
	 * @param	Camera		The related FlxCamera, mainly for scroll values.
	 */
	override private function drawTilemap(Buffer:FlxTilemapBuffer, Camera:flixel.FlxCamera):Void
	{
		var isColored:Bool = ((alpha != 1) || (color != 0xffffff));
		
		//only used for renderTile
		var drawX:Float = 0;
		var drawY:Float = 0;
		var scaledWidth:Float = 0;
		var scaledHeight:Float = 0;
		var drawItem = null;
		
		if (FlxG.renderBlit)
		{
			Buffer.fill();
		}
		else
		{
			getScreenPosition(_point, Camera).subtractPoint(offset).copyToFlash(_helperPoint);
			
			_helperPoint.x = isPixelPerfectRender(Camera) ? Math.floor(_helperPoint.x) : _helperPoint.x;
			_helperPoint.y = isPixelPerfectRender(Camera) ? Math.floor(_helperPoint.y) : _helperPoint.y;
			
			scaledWidth  = _scaledTileWidth;
			scaledHeight = _scaledTileHeight;
			
			var hasColorOffsets:Bool = (colorTransform != null && colorTransform.hasRGBAOffsets());
			drawItem = Camera.startQuadBatch(graphic, isColored, hasColorOffsets, blend);
		}
		
		// Copy tile images into the tile buffer
		_point.x = (Camera.scroll.x * scrollFactor.x) - x - offset.x; //modified from getScreenPosition()
		_point.y = (Camera.scroll.y * scrollFactor.y) - y - offset.y;
		
		var screenXInTiles:Int = Math.floor(_point.x / _scaledTileWidth);
		var screenYInTiles:Int = Math.floor(_point.y / _scaledTileHeight);
		var screenRows:Int = Buffer.rows;
		var screenColumns:Int = Buffer.columns;
		
		// Bound the upper left corner
		screenXInTiles = Std.int(FlxMath.bound(screenXInTiles, 0, widthInTiles - screenColumns));
		screenYInTiles =  Std.int(FlxMath.bound(screenYInTiles, 0, heightInTiles - screenRows));
		
		var rowIndex:Int = screenYInTiles * widthInTiles + screenXInTiles;
		_flashPoint.y = 0;
		var columnIndex:Int;
		var tile:FlxTile;
		var frame:FlxFrame;
		
		#if !FLX_NO_DEBUG
		var debugTile:BitmapData;
		#end 
		
		for (row in 0...screenRows)
		{
			columnIndex = rowIndex;
			_flashPoint.x = 0;
			
			for (column in 0...screenColumns)
			{
				tile = _tileObjects[_data[columnIndex]];
				
				if (tile != null && tile.visible && tile.frame.type != FlxFrameType.EMPTY)
				{
					frame = tile.frame;
					
					if (FlxG.renderBlit)
					{
						frame.paint(Buffer.pixels, _flashPoint, true);
						
						#if !FLX_NO_DEBUG
						if (FlxG.debugger.drawDebug && !ignoreDrawDebug) 
						{
							if (tile.allowCollisions <= FlxObject.NONE)
							{
								// Blue
								debugTile = _debugTileNotSolid; 
							}
							else if (tile.allowCollisions != FlxObject.ANY)
							{
								// Pink
								debugTile = _debugTilePartial; 
							}
							else
							{
								// Green
								debugTile = _debugTileSolid; 
							}
							
							offset.addToFlash(_flashPoint);
							Buffer.pixels.copyPixels(debugTile, _debugRect, _flashPoint, null, null, true);
							offset.subtractFromFlash(_flashPoint);
						}
						#end
					}
					else
					{
						var helperPointX = Std.int(_helperPoint.x);
						var helperPointY = Std.int(_helperPoint.y);
						/*if (helperPointX%2 != 0) 
						{
							helperPointX = Math.floor(_helperPoint.x);
						}*/
						/*
						if (helperPointY%2 != 0) 
						{
							helperPointY = Math.floor(_helperPoint.y);
						}*/
						drawX = helperPointX + (columnIndex % widthInTiles) * scaledWidth;
						drawY = helperPointY + Math.floor(columnIndex / widthInTiles) * scaledHeight;
						_matrix.identity();
						
						if (frame.angle != FlxFrameAngle.ANGLE_0)
						{
							frame.prepareMatrix(_matrix);
						}
						
						var scaleX:Float = scale.x;
						var scaleY:Float = scale.y;
						
						if (useScaleHack)
						{
							scaleX += (1 / (frame.sourceSize.x * Camera.totalScaleX));
							scaleY += (1 / (frame.sourceSize.y * Camera.totalScaleY));
						}
						_matrix.scale(scaleX, scaleY);
						_matrix.translate(drawX, drawY);

						drawItem.addQuad(frame, _matrix, colorTransform);
					}
				}
				
				if (FlxG.renderBlit)
				{
					_flashPoint.x += _tileWidth;
				}
				columnIndex++;
			}
			
			if (FlxG.renderBlit)
			{
				_flashPoint.y += _tileHeight;
			}
			rowIndex += widthInTiles;
		}
		
		Buffer.x = screenXInTiles * _scaledTileWidth;
		Buffer.y = screenYInTiles * _scaledTileHeight;
		
		if (FlxG.renderBlit)
		{
			if (isColored)
			{
				Buffer.colorTransform(colorTransform);
			}
			Buffer.blend = blend;
		}
		
		Buffer.dirty = false;
	}
}