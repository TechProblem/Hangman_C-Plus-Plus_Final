// Hangman_C++_Final.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <set>
using namespace std;

void printMan(int loses) {
    if (loses == 0) {
        cout << "            ()" << endl;
        cout << "   ,________||" << endl;
		cout << "   |        ||" << endl;
		cout << "   |        ||" << endl;
        cout << "   O        ||" << endl;
        cout << "  /|\\       ||" << endl;
        cout << " / | \\      ||" << endl;
        cout << "   |        ||" << endl;
        cout << "  / \\       ||" << endl;
        cout << " /   \\      ||" << endl;
    }
}

int main()
{
    printMan(0);
}

