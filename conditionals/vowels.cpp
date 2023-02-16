#include <iostream>
using namespace std;
int main()
{
    char character;
    cout << "enter your character: ";
    cin >> character;
    switch (character)
    {
    case 'a':
    {
        cout << "vowel";
        break;
    }
    case 'e':
    {
        cout << "vowel";
        break;
    }
    case 'i':
    {
        cout << "vowel";
        break;
    }
    case 'o':
    {
        cout << "vowel";
        break;
    }
    case 'u':
    {
        cout << "vowel";
        break;
    }
    default:
    {
        cout << "constant";
    }
    }
    return 0;
}