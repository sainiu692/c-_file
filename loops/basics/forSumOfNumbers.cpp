#include <iostream>
using namespace std;
int main()
{
    int i;
    int sum = 0;
    int num;
    cout << "enter number: ";
    cin >> num;
    for (i = 0; i <= num; i++)
    {
        sum = sum + i;
    }
    cout << "sum of numbers: " << sum;
    return 0;
}