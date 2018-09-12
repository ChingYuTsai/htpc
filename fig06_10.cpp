#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    unsigned seed;

    //cout << "Enter seed: ";
    cin >> seed;
    //srand( seed );
    srand( time( 0) );

    //loop 20 times
    for (int counter=1; counter <= 20; counter++)
    {
        //pick number from 1 to 6 and count it
        cout << setw( 10 ) << ( 1 + rand() % 6 );

        //if counter is divisible by 5, start a new line
        if ( counter % 5 ==0 )
            cout << endl;
    }//end of for

    return 0;
}//end of main
