// to organize the headers so theres no need to include all of them in main
#include <iostream>
//#include "Item.h"
#include "Porkemoon.h"
#include "Tammy.h"
#include "Item.h"
#include "Potion.h"

int main()
{
    int choice;
    // To dynamically iterate all porkemoons instead of hardcoding 1. tammy 2. jarry etc.
    // idk how choose either tammy or jarry based on user input sia
    cout << "Choose your Porkemoon!\n";
    cout << "1. Tammy\n";
    cout << "2. Jarry\n";
    cin >> choice;

    //Testing
    Porkemoon *pork;
    pork = &Tammy();

    Item* itai;
    itai = &Potion();

    cout << itai->effect();
    pork->attack();
    pork->special();

    // =====GAME LOGIC=====yorm
    // (turn based fighting with enemy)
    // just randomize the enemy choices (attack,special) and always perform their passive


    // if win, add moni for player and go to "shop"
    // else lose and end

    // restart "game logic", fight another enemy

}
