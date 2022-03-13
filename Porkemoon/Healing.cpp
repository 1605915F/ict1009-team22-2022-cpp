#include "Healing.h"

Healing::Healing(string itemName, int healScale) : Item(itemName) {
	this->setItemScale(healScale);
}

int Healing::effect() {
	return Item::getBaseItemScale() * this->getItemScale();
}