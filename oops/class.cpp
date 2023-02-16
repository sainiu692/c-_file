#include <iostream>
using namespace std;
class employee
{
public:
    string name;
    int year_of_joining;
    string address;
};
int main()
{
    employee e1;
    cout << "enter values" << endl;
    cin >> e1.name >> e1.year_of_joining >> e1.address;
    cout << e1.name << endl
         << e1.year_of_joining << endl
         << e1.address << endl;
    employee e2;
    cout << "enter values";
    cin >> e2.name >> e2.year_of_joining >> e2.address;
    cout << e2.name << endl
         << e2.year_of_joining << endl
         << e2.address << endl;
    return 0;
}