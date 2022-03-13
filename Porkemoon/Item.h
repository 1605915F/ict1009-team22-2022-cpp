#pragma once

#include <iostream>

using namespace std;

class Item {
private:
	string itemName;
	const static int BASEITEMSCALE;
	int itemScale;
public:
	Item(string itemName);
	string getItemName();
	void setItemName(string itemName);
	int getBaseItemScale();
	int getItemScale();
	void setItemScale(int itemScale);
	virtual int effect() = 0;
};

