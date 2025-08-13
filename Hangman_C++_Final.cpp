// Hangman_C++_Final.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <set>
#include <string>
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

void underline(const string& text) {
    cout << text << endl;
	
	cout << string(text.length(), '-') << endl;
    
}

int main()
{
    printMan(0);
    cout << "\033[4mThis\033[0m \033[4mis\033[0m \033[4ma\033[0m \033[4mtemplate\033[0m \033[4mfor\033[0m \033[4munderlined\033[0m \033[4mphrases\033[0m" << endl;
    cout << "____ __ _ ________ ___ __________ _______" << endl;
    underline("This is a template for underlined phrases");
}

