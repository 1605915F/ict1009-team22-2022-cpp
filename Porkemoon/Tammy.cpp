#pragma once

#include "Tammy.h"

Tammy::Tammy(string porkeName, int maxHealth) :Porkemoon(porkeName, maxHealth) {
	cout << "lol\n";
}

void Tammy::special() {
	cout << "watchdis!" << endl;
}