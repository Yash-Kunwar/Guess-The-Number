// This is a game in which u have to guess random numbers and guessing will provide u with hints. Ur objective is to find the correct numbers with minimum attempts as possible. Default you will be given 10 attempts.

#include <iostream>
#include <cstdlib> // for generating random numbers using rand() and srand()
#include <limits>  // for clearing buffer space using cin.clear() and cin.ignore(). Have maximum buffer space.
#include <ctime>   // for accessing time function and assign various seed values for new random numbers every time
using namespace std;

int main()
{
    int r_num, guess, attempts = 0;
    int t = time(0);
    srand(t);
    r_num = rand() % 100 + 1;

    cout << "You will be given 7 attempts" << endl;
    cout << "Guess the number (1 to 100): ";
    do
    {
        attempts++;
        if (!(cin >> guess))
        {
            cout << "Please enter only numbers" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
        {
            if (r_num < guess)
            {
                cout << "The secret number is lower than " << guess << endl;
            }
            else if (r_num > guess)
            {
                cout << "The secret number is higher than " << guess << endl;
            }
        }
        if (attempts >= 7)
        {
            cout << "--GAME OVER--" << endl;
            cout << "The correct number was " << r_num << endl;
            return 0;
        }
    } while (r_num != guess);
    cout << "CONGRATULATIONS!! You guessed the number in " << attempts << " attempts." << endl;
    return 0;
}
