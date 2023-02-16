#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "a: ";
    cin >> a;
    if (a % 2 != 0)
    {
        cout << "entered numbetr is ODD";
    }
    else
    {
        cout << "entered number is EVEN";
    }
    return 0;
}