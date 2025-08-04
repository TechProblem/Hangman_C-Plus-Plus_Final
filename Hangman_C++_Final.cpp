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
    else if (loses == 1) {
        cout << "            ()" << endl;
        cout << "   ,________||" << endl;
        cout << "   |        ||" << endl;
        cout << "   |        ||" << endl;
        cout << "   O        ||" << endl;
        cout << "  /|\\       ||" << endl;
        cout << " / | \\      ||" << endl;
        cout << "   |        ||" << endl;
        cout << "    \\       ||" << endl;
        cout << "     \\      ||" << endl;
    }
    else if (loses == 2) {
        cout << "            ()" << endl;
        cout << "   ,________||" << endl;
        cout << "   |        ||" << endl;
        cout << "   |        ||" << endl;
        cout << "   O        ||" << endl;
        cout << "  /|\\       ||" << endl;
        cout << " / | \\      ||" << endl;
        cout << "   |        ||" << endl;
        cout << "            ||" << endl;
        cout << "            ||" << endl;
    }
    else if (loses == 3) {
        cout << "            ()" << endl;
        cout << "   ,________||" << endl;
        cout << "   |        ||" << endl;
        cout << "   |        ||" << endl;
        cout << "   O        ||" << endl;
        cout << "   |\\       ||" << endl;
        cout << "   | \\      ||" << endl;
        cout << "   |        ||" << endl;
        cout << "            ||" << endl;
        cout << "            ||" << endl;
    }
    else if (loses == 4) {
        cout << "            ()" << endl;
        cout << "   ,________||" << endl;
        cout << "   |        ||" << endl;
        cout << "   |        ||" << endl;
        cout << "   O        ||" << endl;
        cout << "   |        ||" << endl;
        cout << "   |        ||" << endl;
        cout << "   |        ||" << endl;
        cout << "            ||" << endl;
        cout << "            ||" << endl;
    }
    else if (loses == 5) {
        cout << "            ()" << endl;
        cout << "   ,________||" << endl;
        cout << "   |        ||" << endl;
        cout << "   |        ||" << endl;
        cout << "   O        ||" << endl;
        cout << "            ||" << endl;
        cout << "            ||" << endl;
        cout << "            ||" << endl;
        cout << "            ||" << endl;
        cout << "            ||" << endl;
        cout << "\nYou Lose!" << endl;
    }
}

int main()
{
    printMan(5);
}

