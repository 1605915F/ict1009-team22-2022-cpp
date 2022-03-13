#pragma once

#include <iostream>
#include <vector>
#include "Item.h"

using namespace std;

class Porkemoon {
private:
	int health;
	string porkeName;
	int maxHealth;
	float attackScale;
	vector<Item> inventory;
	static const int baseAttack;
public:
	Porkemoon(string porkeName, int maxHealth);
	string getPorkeName();
	void setPorkeName(string porkeName);
	int getHealth();
	void setHealth(int health);
	int getMaxHealth();
	void setMaxHealth(int health);
	float getAttackScale();
	void setAttackScale(float attackScale);
	void attack();
	//Item getItem(int itemIndex);
	//void setItem(int itemIndex, Item item);
	virtual void special() = 0;
};