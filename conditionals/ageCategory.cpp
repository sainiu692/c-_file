#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter the age: ";
    cin >> age;
    if (age < 12)
    {
        cout << "entered age is of child";
    }
    else if (12 <= age && age <= 18)
    {
        cout << "entered age is of teenager";
    }
    else
    {
        cout << "entered age is of adult";
    }
    return 0;
}