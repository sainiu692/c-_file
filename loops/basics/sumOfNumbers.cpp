#include <iostream>
using namespace std;
int main()
{
    int num;
    int i = 0; // loop variable
    int sum = 0;
    cout << "enter number: ";
    cin >> num;
    while (i <= num) // condition
    {
        sum = sum + i;
        i++; // updating loop variable
    }
    cout << "sum of numbers: " << sum << endl;
    return 0;
}