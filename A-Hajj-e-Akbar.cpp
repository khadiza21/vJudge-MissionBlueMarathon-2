#include <bits/stdc++.h>
using namespace std;
int main()
{
    string stringWord[10000]; 
    int caseNum = 1;
    for (int i = 0; i <= 10000; i++)
    {
        cin >> stringWord[i];
        if (stringWord[i] == "*")
        {
            break;
        }
    }

    for (int i = 0; i <= 10000; i++)
    {
       

        if (stringWord[i] == "*")
        {
            break;
        }
        if (stringWord[i] == "Hajj")
        {
            cout << "Case " << caseNum << ": Hajj-e-Akbar" << endl;
        }
        else if (stringWord[i] == "Umrah")
        {
            cout << "Case " << caseNum << ": Hajj-e-Asghar" << endl;
        }

        caseNum++;
    }

    return 0;
}