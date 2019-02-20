#include <iostream>
#include <math.h>
using namespace std;

//Change the name of the function to be called power and have it take an int base and an int exponent.
// Print the base number raised to the exponent power.
void power(int base, int exponent)
{
    cout << pow (base, exponent) << endl;
}

int main()
{
    power(2,3);

    return 0;
}