#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    string name;
    char input;
    int inputuser;
    int score = 0;
    cout << "ENTER YOUR NAME     ";
    getline(cin, name);
    cout << endl;
    do
    {
        srand(0);
        int variable = rand() % 7 + 1;
        cout << "ENTER ANY NUMBER FROM 1 TO 7    ";
        cin >> inputuser;
        cout << endl;
        if (inputuser == variable)
        {
            cout << "HURRAYYYY! YOU GUESSED IT RIGHT " << endl;
            score++;
            cout << "NEW SCORE " << score << endl;
        }
        else
        {
            cout << "Sorry you guessed it wrong.TRY AGAIN  " << endl;
        }
        cout << "Press ANY key to play again or else Press N to exit ";
        cin >> input;
        cout << endl;
    } while (input != 'N');
    cout << "your score is " << score << endl;
    cout << "GAME ENDED :( " << endl;
}