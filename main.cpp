#include <iostream>
#include <math.h>
using namespace std;

//Change the name of the function to be called power and have it take an int base and an int exponent.
// Print the base number raised to the exponent power.
int power(int base, int exponent)
{
    int toReturn =  pow (base, exponent);
    return toReturn;
}

int main()
{
    cout << power(2,2) << endl;

    return 0;
}