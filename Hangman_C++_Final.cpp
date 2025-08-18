// Hangman_C++_Final.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <set>
#include <string>
#include <random>
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
string phrases[20] = {
    "unreal engine", "game programming", "networking", "pathfinding", "data structures", "notifications", "simulation",
    "gamification", "github repository", "visual studio", "application", "direct recursion", "multithreading", "azure devops",
    "processing power", "debugging", "extensions", "software development", "commit changes", "version control"
};
void selectRandomPhrase(string& phrase) {
    random_device rd;  // Obtain a random number from hardware
    mt19937 eng(rd()); // Seed the generator
    uniform_int_distribution<> distr(0, 19); // Define the range
    phrase = phrases[distr(eng)];
}
void underlinePhrase(const string& phrase) {
    for (size_t i = 0; i < phrase.length(); ++i) {
        if (phrase[i] == ' ') {
            cout << ' '; // Print space as is
        } else {
            cout << "_"; // Underline each character
        }
	}
}
void guessLetter(char letter, const string& phrase, set<char>& guessedLetters) {
    if (guessedLetters.find(letter) == guessedLetters.end()) {
        guessedLetters.insert(letter);
        cout << "You guessed: " << letter << endl;

    } else {
        cout << "You already guessed that letter." << endl;
    }
}

int main()
{
    string phrase;

    cout << endl;
    phrase = phrases[0];
    selectRandomPhrase(phrase);
    cout << "Random Phrase: " << phrase << endl;
    set<char> guessedLetters;
    int loses = 0;
    while (loses < 5) {
        cout << phrase << endl;
        printMan(loses);
        cout << "Guessed letters: ";
        for (char letter : guessedLetters) {
            cout << letter << ' ';
        }
		cout << endl;
        // replace underscores with guessed letters
		cout << "Current phrase: ";
        for (char c : phrase) {
            if (c == ' ') {
                cout << ' '; // Print space as is
            }
            else if (guessedLetters.find(c) != guessedLetters.end()) {
                cout << c; // Print the letter if guessed
            }
            else {
                cout << '_'; // Print underscore for unguessed letters
            }
        }
		cout << endl;
        bool allGuessed = true;
        for (char c : phrase) {
            if (c != ' ' && guessedLetters.find(c) == guessedLetters.end()) {
                allGuessed = false;

            }
        }
        if (allGuessed) {
            cout << "Congratulations! You guessed the phrase: " << phrase << endl;
            return 0;
        }
        char guess;
        cout << "Enter a letter to guess: ";
        cin >> guess;
        guess = tolower(guess); // Convert to lowercase for consistency

        guessLetter(guess, phrase, guessedLetters);
		// Check if the guessed letter is in the phrase

        if (phrase.find(guess) == string::npos) {
            loses++;
            cout << "Wrong guess! You have " << (5 - loses) << " tries left." << endl;
        }
        if (loses == 5) {
            printMan(loses);
            cout << "You lose! The phrase was: " << phrase << endl;
            return 0;
        }
    }
	return 0;
}

