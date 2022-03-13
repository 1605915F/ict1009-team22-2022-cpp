#include "Healing.h"

Healing::Healing(string itemName, int healScale) : Item(itemName, healScale) {
	
}

int Healing::effect() {
	return Item::getBaseItemScale() * this->getItemScale();
}