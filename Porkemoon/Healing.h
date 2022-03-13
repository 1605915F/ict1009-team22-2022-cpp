#pragma once

#include "Item.h"

class Healing : public Item {
public:
	Healing(string itemName, int healScale);
	int effect();
};
