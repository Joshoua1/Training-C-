/**
 * This C++ program swaps the values of two numbers using a temporary variable.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping, a = " << a << " and b = " << b << endl;

    return 0;
}