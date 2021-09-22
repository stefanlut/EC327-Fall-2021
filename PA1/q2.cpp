#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    /* Declaring Variables */
    int randInt, inputGuess;

    /* Initializing Seed */
    srand(time(NULL));

    /* Initial input & error checking */
    cout << "Choose Rock (0), Paper (1), or Scissors (2): ";
    cin >> inputGuess;
    
    while(inputGuess > 2 || inputGuess < 0)
    {
        cout << "Invalid number chosen!" << endl;
        cout << "Choose Rock (0), Paper (1), or Scissors (2): ";
        cin >> inputGuess;
    }
    /* Computer chooses a random integer after user */
    randInt = rand() % 2 + 0;
    switch(randInt)
    {
        case 0:
        cout << "Computer chooses: Rock" << endl;
        break;

        case 1:
        cout << "Computer chooses: Paper" << endl;
        break;

        case 2:
        cout << "Computer chooses: Scissors" << endl;
        break;
    }
    if(randInt == inputGuess) cout << "You tie!" << endl;

    if(randInt != inputGuess && randInt == 0) // If Computer chooses Rock
    {
        switch(inputGuess)
        {
            case 1:
            cout << "You win!" << endl;
            break;

            case 2:
            cout << "You lose!" << endl;
            break;
        }
    }

    if(randInt != inputGuess && randInt == 1) // If Computer chooses Paper
    {
        switch(inputGuess)
        {
            case 0:
            cout << "You lose!" << endl;
            break;

            case 2:
            cout << "You win!" << endl;
            break;
        }
    }

    if(randInt != inputGuess && randInt == 2) // If Computer chooses Scissors
    {
        switch(inputGuess)
        {
            case 0:
            cout << "You win!" << endl;
            break;

            case 1:
            cout << "You lose!" << endl;
            break;
        }
    }
    return 0;
}