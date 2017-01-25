//
//  FirstController.cpp
//  FirstProject
//
//  Created by Moffat, Braeden on 1/23/17.
//  Copyright © 2017 Moffat, Braeden. All rights reserved.
//

#include <iostream>
#include "FirstController.h"

using namespace std;

void FirstController :: start()
{
    cout << "Im excited to learn C++" << endl;
    int myAge = 17;
    cout << "I am " << myAge << " years old." << endl;
    cout << "\n";
    
    this->specialOutput();
}

void FirstController :: specialOutput()
{
    cout << "How old are you?" << endl;
    int yourAge;
    cin >> yourAge;
    cout << "Oh, you're " << yourAge << " years old!" << endl;
    string myName;
    cin.ignore();
    cout << "What's your name?" << endl;
    getline(cin, myName);
    cout << myName << " is a nice name." << endl;
    cout << "Now type you name and age." << endl;
    cin >> myName >> yourAge;
    cout << "You typed: " << myName << " and " << yourAge << endl;
}
