#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cin >> n;
    while (n > 0)
    {
        int lastDigits = n % 10;
        sum += lastDigits;
        n /= 10;
    }
    cout << sum << endl;
    return 0;
}