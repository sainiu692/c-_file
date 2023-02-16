#include <iostream>
using namespace std;
int main()
{
    char character;
    cin >> character;
    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
    {
        cout << "vowel";
    }
    else
    {
        cout << "constant";
    }
    return 0;
}