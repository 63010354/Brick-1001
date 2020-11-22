#include <iostream>
#include <string.h>
using namespace std;

void fall(string c[], int, int, int);

int main()
{
    int n, m;
    cin >> n >> m;
    string c[21];
    int brick;
    
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> brick;
        if (c[0][i] == '.')
        {
            while (brick--)
            {
                fall(c, i, 0, n);
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << c[i][j];
        }
        cout << endl;
    }
}

void fall(string c[], int n, int pt, int h)
{
    if (pt + 1 < h and c[pt + 1][n] == '.')
    {
        fall(c, n, pt + 1, h);
    }

    else
    {
        c[pt][n] = '#';
    }
}
