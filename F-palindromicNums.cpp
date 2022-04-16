#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string number;

    for (int i = 1; i <= n; i++)

    {
        cin >> number;
        string reverseNum = number;
        reverse(number.begin(), number.end());

        if (number == reverseNum)
        {
            cout << "Case " << i << ": Yes" << endl;
        }
        else
        {
            cout << "Case " << i << ": No" << endl;
        }
    }

    return 0;
}