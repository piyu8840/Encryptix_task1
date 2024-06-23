#include <iostream>
using namespace std;
#include <ctime>

int main()
{

    srand(time(0));             // random number generator with the current time
                                //sequence of random numbers is different each time when the program runs.
    int gen_num = (rand() % 100)+1; // generate random number between 1 & 100.
    int guess_num;

    while (guess_num != gen_num) // loop end when user guess the right number.
    {
        cout << "Guess a number between 1 & 100 : " << endl; // taking input from user
        cin >> guess_num;

        if (guess_num == gen_num)
        {
            cout << "Congratulations user! You guessed the right number." << endl;
        }

        else if (guess_num < gen_num)
        {
            cout << "Incorrect! " << endl
                 << "Your guess was too low" << endl;
        }
        else
        {
            cout << "Incorrect! " << endl
                 << "Your guess was too high" << endl;
        }
    }

    return 0;
}