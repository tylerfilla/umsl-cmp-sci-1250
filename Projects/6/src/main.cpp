/*
 *
 * Project 6
 * Tyler Filla
 *
 */

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

#define PLAY_ROCK      1
#define PLAY_PAPER     2
#define PLAY_SCISSORS  3
#define PLAY_LIZARD    4
#define PLAY_SPOCK     5
#define PLAY_EXIT_GAME 6

#define RESULT_TIE      0
#define RESULT_WIN_CPU  1
#define RESULT_WIN_USER 2

using namespace std;

string getPlayName(int play) {
    // Return name associated with given play
    switch (play) {
    case PLAY_ROCK:
        return "rock";
    case PLAY_PAPER:
        return "paper";
    case PLAY_SCISSORS:
        return "scissors";
    case PLAY_LIZARD:
        return "lizard";
    case PLAY_SPOCK:
        return "Spock";
    }
}

int checkRoundResult(int playCpu, int playUser) {
    // Check for tie
    if (playCpu == playUser) {
        return RESULT_TIE;
    }
    
    // Check if user won
    if ((playCpu == PLAY_ROCK     && (playUser == PLAY_PAPER    || playUser == PLAY_SPOCK   )) ||
        (playCpu == PLAY_PAPER    && (playUser == PLAY_SCISSORS || playUser == PLAY_LIZARD  )) ||
        (playCpu == PLAY_SCISSORS && (playUser == PLAY_ROCK     || playUser == PLAY_SPOCK   )) ||
        (playCpu == PLAY_LIZARD   && (playUser == PLAY_ROCK     || playUser == PLAY_SCISSORS)) ||
        (playCpu == PLAY_SPOCK    && (playUser == PLAY_PAPER    || playUser == PLAY_LIZARD  ))) {
            return RESULT_WIN_USER;
    }
    
    // Assume user lost
    return RESULT_WIN_CPU;
}

bool game() {
    // Display play menu
    cout << endl;
    cout << "Possible plays:" << endl;
    cout << "  1. Rock" << endl;
    cout << "  2. Paper" << endl;
    cout << "  3. Scissors" << endl;
    cout << "  4. Lizard" << endl;
    cout << "  5. Spock" << endl;
    cout << "  6. [EXIT GAME]" << endl;
    cout << endl;
    
    // Selected plays
    int playCpu  = rand()%4 + 1;
    int playUser = -1;
    
    // Read and validate user input
    while (playUser == -1) {
        cout << "Your play: ";
        cin >> playUser;
        
        if (playUser < 1 || playUser > 6) {
            cout << "Invalid play \"" << playUser << "\"; please try again." << endl;
            
            playUser = -1;
        }
    }
    
    // Check if game should quit
    if (playUser == PLAY_EXIT_GAME) {
        return true;
    }
    
    // Display round events
    cout << endl;
    cout << "You played " << getPlayName(playUser) << " (" << playUser << ")." << endl;
    cout << "CPU played " << getPlayName(playCpu) << " (" << playCpu << ")." << endl;
    cout << endl;
    
    // Evaluate the round and display result
    switch (checkRoundResult(playCpu, playUser)) {
    case RESULT_TIE:
        cout << ">>> You and CPU tied!" << endl;
        break;
    case RESULT_WIN_CPU:
        cout << ">>> CPU won the round! Better luck next time!" << endl;
        break;
    case RESULT_WIN_USER:
        cout << ">>> You won the round! Congratulations!" << endl;
        break;
    }
    
    return false;
}

int main() {
    cout << "Rock, paper, scissors, lizard, Spock!" << endl;
    
    srand(time(0));
    
    while (!game()) {
    }
    
    return 0;
}

/*
 *
 * Sample output at runtime:
 *
 * Rock, paper, scissors, lizard, Spock!
 *
 * Possible plays:
 *   1. Rock
 *   2. Paper
 *   3. Scissors
 *   4. Lizard
 *   5. Spock
 *   6. [EXIT GAME]
 *
 * Your play: 1
 *
 * You played rock (1).
 * CPU played rock (1).
 *
 * >>> You and CPU tied!
 *
 * Possible plays:
 *   1. Rock
 *   2. Paper
 *   3. Scissors
 *   4. Lizard
 *   5. Spock
 *   6. [EXIT GAME]
 *
 * Your play: 6
 *
 */
