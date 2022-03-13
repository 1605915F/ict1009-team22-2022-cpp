#include "Porkemoon.h"
#include "Item.h"

Porkemoon::Porkemoon(string porkeName, int maxHealth) {
	this->porkeName = porkeName;
	this->maxHealth = maxHealth;
}

string Porkemoon::getPorkeName() {
	return this->porkeName;
}

void Porkemoon::setPorkeName(string porkeName) {
	this->porkeName = porkeName;
}

int Porkemoon::getHealth() {
	return this->health;
}

void Porkemoon::setHealth(int health) {
	this->health = health;
}

int Porkemoon::getMaxHealth() {
	return this->maxHealth;
}

void Porkemoon::setMaxHealth(int maxHealth) {
	this->maxHealth = maxHealth;
}

float Porkemoon::getAttackScale() {
	return this->attackScale;
}

void Porkemoon::setAttackScale(float attackScale) {
	this->attackScale = attackScale;
}

void Porkemoon::attack() {
	cout << "yorm!" << endl;
}



//Item Porkemoon::getItem(int itemIndex) {
//	return this->inventory[itemIndex];
//}
//
//void Porkemoon::setItem(int itemIndex, Item item) {
//	this->inventory[itemIndex] = item;
//}
