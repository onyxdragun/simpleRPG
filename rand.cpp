#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <ctime>


using namespace std;

int main()
{
    int randomNum;

    srand(time(0));
    int randn = rand();
    
    cout << "Rand: " << randn << endl;    
    randomNum = (randn % 10) + 1;


    cout << "Random Number is " << randomNum << endl;
    return 0;
}
