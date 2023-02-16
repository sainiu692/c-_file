#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= m; j++)
        {
            if (i == 1 || i == n || j == 1 || j == m)
            {
                cout << "*";
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

// #include <iostream>
// using namespace std;
// int main()
// {
//     int h = 4, w = 6;
//     for (int i = 0; i < h; i++)
//     {
//         cout << endl;
//         for (int j = 0; j < w; j++)
//         {

//             if (i == 0 || i == h - 1 ||
//                 j == 0 || j == w - 1)
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//     }
// }