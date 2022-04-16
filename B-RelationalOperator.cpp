#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cmpNum1, cmpNum2, number;
    cin>>number;
    for (int i = 0; i < number; i++)
    {
        cin >> cmpNum1 >> cmpNum2;
        if (cmpNum1 > cmpNum2)
        {
            cout << ">" << endl;
        }
        else if (cmpNum1 < cmpNum2)
        {
            cout << "<" << endl;
        }
        else
        {
            cout << "=" << endl;
        }
    }

        return 0;
}