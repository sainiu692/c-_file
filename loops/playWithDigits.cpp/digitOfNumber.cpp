#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "enter the number: ";
    cin >> n;
    int digits = 0;
    while (n > 0)
    {
        // n = n / 10;
        digits++;
        n = n / 10;
    }
    cout << "number of digits=" << digits;
    return 0;
}