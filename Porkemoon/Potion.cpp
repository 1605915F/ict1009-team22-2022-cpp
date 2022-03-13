#include "Potion.h"

Potion::Potion(string itemName, int healScale) : Healing(itemName, healScale) {
	cout << "potion\n";
}

