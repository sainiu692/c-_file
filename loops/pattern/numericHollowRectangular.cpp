#include <iostream>
using namespace std;
int main()
{
    int i, j, rows, cols;
    cout << "Enter Rows = ";
    cin >> rows;
    cout << "Enter Columns = ";
    cin >> cols;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= cols; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == cols)
            {
                cout << j;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}