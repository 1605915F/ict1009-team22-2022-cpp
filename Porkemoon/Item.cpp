#include "Item.h"

const int Item::BASEITEMSCALE = 1;

Item::Item(string itemName) {
	this->itemName = itemName;
}

string Item::getItemName() {
	return this->itemName;
}

void Item::setItemName(string itemName) {
	this->itemName = itemName;
}


int Item::getBaseItemScale() {
	return Item::BASEITEMSCALE;
}

int Item::getItemScale() {
	return this->itemScale;
}

void Item::setItemScale(int itemScale) {
	this->itemScale = itemScale;
}
