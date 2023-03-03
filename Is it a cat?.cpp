#include <iostream>
#include <string>
using namespace std;

bool Meowing(string st);
int main()
{
    int t,i;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        int n;
        string st;
        cin >> n >> st;


        if (Meowing(st))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
bool Meowing(string st)
{
    int i = 0;
    while (st[i] == 'm' || st[i] == 'M')
    {
        i++;
    }
    if (i == 0)
    {
        return false;
    }

    while (st[i] == 'e' || st[i] == 'E')
    {
        i++;
    }
    if (i == 1)
    {
        return false;
    }

    while (st[i] == 'o' || st[i] == 'O')
    {
        i++;
    }
    if (i == 2)
    {
        return false;
    }

    while (st[i] == 'w' || st[i] == 'W')
    {
        i++;
    }
    if (i != st.length())
    {
        return false;
    }

    return true;
}

