#include <iostream>

using namespace std;

//Add a void function called square() that takes an int value to be squared. Have the function print the squared value
void square(int toSquare)
{
    cout << (toSquare * toSquare) << endl;
}

int main()
{
    square(2);

    return 0;
}