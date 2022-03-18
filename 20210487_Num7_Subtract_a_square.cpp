#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    int n_coins ; int move;int x;
    n_coins = 45 + rand () % 54 ;
    string player_1; string player_2;
    cout << "plz enter 1st player name : ";
    cin >> player_1;
    cout << "\nplz enter 2nd player name : ";
    cin >> player_2;
    cout << "\ncoins = " << n_coins <<endl;
    while (true)
    {
        while (true)
        {
            cout << player_1 << " please enter coins 1, 4, 9, 16, 25 or 36 : ";
            cin >> move ;
            int list[6] = {1 , 4 , 9 , 16 , 25 , 36 };
            for (int i=0 ; i <= 6 ; i++ )
            {
                if ( move == list[i])
                {
                    x = 1 ;
                    break;
                }
            }
            if (x == 1)
            {
                break;
            }              
        }
        n_coins -= move;
        cout << "Remaining coins = " << n_coins << endl;
        if (n_coins < 1 )
        {
            cout << player_1 << " won ";
            break;
        }




        while (true)
        {
            cout << player_2 << " please enter coins 1, 4, 9, 16, 25 or 36 : ";
            cin >> move ;
            int list[6] = {1 , 4 , 9 , 16 , 25 , 36 };
            for (int i=0 ; i <= 6 ; i++ )
            {
                if ( move == list[i])
                {
                    x = 2 ;

                    break;
                }
            }
            if (x == 2)
            {
                break;
            }              
        }
        n_coins -= move;
        cout << "Remaining coins = " << n_coins << endl;
        if (n_coins < 1 )
        {
            cout << player_2 << " won ";
            break;
        }
    }
    
}

