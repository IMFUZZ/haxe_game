package items;

import haxe.ds.Vector;

class Inventory {

	public var items:Vector<Item>;
	public var selectedItemIndex:Int = 0;

	public function new(a_size:Int) {
		items = new Vector<Item>(a_size);
	}

	public function moveSelectedItemIndex(val:Int) {
		selectedItemIndex = (selectedItemIndex + val)%items.length;
	}

	public function indexIsValid(pos:Int):Bool {
		return (0 <= pos && pos < items.length);
	}

	public function insert(pos:Int, item:Item):Bool {
		if (!this.indexIsValid(pos)) {
			return false;
		}
		if (items.get(pos) != null) {
			remove(pos);
		}
		items.set(pos,item);
		return true;
	}

	public function removeSelectedItem():Item {
		return remove(selectedItemIndex);
	}

	public function remove(index:Int):Item {
		var item = items.get(index);
		items.set(index, null);
		return item;
	}

	public function getAvailableIndex():Int {
		for (index in 0...items.length) {
			trace(items[index]);
			if (items[index] == null) {
				trace("items[index] == null");
				return index;
			}
		}
		return -1;
	}

	public function as(item:Item):Int {
		for (index in 0...items.length) {
			if (items[index] != null) {
				if (items[index].name == item.name) {
					return index;
				}
			}
		}
		return -1;
	}

	public function addItem(item:Item):Bool {
		var pos = this.as(item);
		var itemAdded = false;
		if (this.indexIsValid(pos)) {
			itemAdded = items[pos].stack(item);
		}
		if (!itemAdded) {
			itemAdded = insert(getAvailableIndex(), item);
		}
		return itemAdded;
	}

	public function getSize() {
		var numberOfItems = 0;
		for (index in 0...items.length) {
			if (items[index] != null) {
				trace("slot #" + index + " : " + items[index].name + " | Quantity : " + items[index].quantity);
				numberOfItems++;
			}
		}
		return numberOfItems;
	}
}