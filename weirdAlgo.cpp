#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main()
{
    ull n;
    cin >> n;
    cout << n << " ";
    if (n != 1)
    {
        for (int i = 0; i < 1e8; i++)
        {
            if (n % 2 == 0)
            {
                n = n / 2;
                cout << n << " ";
            }
            else
            {
                n = 3 * n + 1;
                cout << n << " ";
            }

            if (n == 1)
            {
                break;
            }
        }
    }

    return 0;
}