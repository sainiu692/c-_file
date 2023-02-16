// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << j;
//         }
//         for (int j = n + 1; j <= n + 2; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

/* Print a rectangular pattern as shown in the example below.
 Example if row=4,col=6  */

#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter no of rows" << endl;
    cin >> row;
    cout << "Enter no of columns" << endl;
    cin >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
