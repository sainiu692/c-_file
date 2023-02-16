#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter number: ";
    cin >> num;
    // if ((num % 2 == 0) && (num % 3 == 0))
    // {
    //     cout << "hurray u pickup right number: " << num;
    // }
    // else
    // {
    //     cout << "change the number";
    // }
    if ((num % 2 == 0) || (num % 3 == 0))
    {
        cout << "hurray u pickup right number: " << num;
    }
    else
    {
        cout << "change the number";
    }
    return 0;
}