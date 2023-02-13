#include <iostream>
using namespace std;
int main()
{
    int a[3][3], b[3][3], c[3][3], i, j, k;
    cout << "enter first matrix" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "enter second matrix" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }
    // matrix multiplication
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout << "print matrix" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << c[i][j];
        }
        cout << endl;
    }
    return 0;
}