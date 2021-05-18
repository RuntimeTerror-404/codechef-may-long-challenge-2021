#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a[3][3];
        int countx = 0, counto = 0, winx = 0, wino = 0, count_ = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 'X')
                    countx++;
                else if (a[i][j] == 'O')
                    counto++;
                else if (a[i][j] == '_')
                    count_++;
            }
        }

        for (int i = 0; i < 3; i++)
        {
            if (a[i][0] == a[i][1] and a[i][2] == a[i][1])
            {
                if (a[i][0] == 'X')
                    winx++;
                else if (a[i][0] == 'O')
                    wino++;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            if (a[0][i] == a[1][i] and a[2][i] == a[1][i])
            {
                if (a[0][i] == 'X')
                    winx++;
                else if (a[0][i] == 'O')
                    wino++;
            }
        }
        if (a[0][0] == a[1][1] and a[2][2] == a[1][1])
        {
            if (a[1][1] == 'X')
                winx++;
            else if (a[1][1] == 'O')
                wino++;
        }
        if (a[0][2] == a[1][1] and a[2][0] == a[1][1])
        {
            if (a[1][1] == 'X')
                winx++;
            else if (a[1][1] == 'O')
                wino++;
        }

        if (counto > countx)
            cout << 3 << endl;
        else if (countx - counto > 1)
            cout << 3 << endl;
        else if ((countx > counto) and winx == 1 and wino == 0)
        {
            cout << 1 << endl;
        }
        else if ((countx == counto) and wino == 1 and winx == 0)
        {
            cout << 1 << endl;
        }
        else if (count_ == 0 and (winx + wino == 0))
            cout << 1 << endl;
        else if (count_ == 0 and winx == 2)
        {
            cout << 1 << endl;
        }

        else if (count_ > 0 and (winx + wino == 0))
        {
            cout << 2 << endl;
        }
        else
            cout << 3 << endl;
    }
    return 0;
}