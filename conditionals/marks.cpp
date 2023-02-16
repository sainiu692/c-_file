#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "enter marks: ";
    cin >> marks;
    if (marks > 33)
    {
        if (marks > 80)
        {
            cout << "gracefully pass";
        }
        else
        {
            cout << "pass";
        }
    }
    else
    {
        cout << "fail";
    }
    return 0;
}