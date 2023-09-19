/*TASK 1:NUMBER GUESSING GAME
   TO GENERATE A RANDOM NUMBER AND
      TO ASK THE USER TO GUESS THE NUMBER */

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int G;

char i;
int main()
{
    do
    {
        srand(0);
        int num = rand() % 100 + 1;
        cout << "Enter any number (between range 1-100):" << endl;
        cin >> G;
        
        if (G == num)
        {
            cout << "Your guess is absolutely correct i.e." << num << endl;
            
        }
        else if (G < num)
        {
            cout << "Guess the higher number" << endl;
        }
        else if (G > num)
        {
            cout << "Guess the lower number" << endl;
        }

        else
        {
            cout << "ERROR" << endl;
        }
        cout << "Would you like to try again Y/N " << endl;
        cin >> i;
    } while (i != 'N');
    cout << "Game end." << endl;
    return 0;
}