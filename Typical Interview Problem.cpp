#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int t;
    string st = "";
    cin >> t;
    for (int i = 1; i <= 10000; i++)
    {
        if (i % 3 == 0) st += 'F';
        if (i % 5 == 0) st += 'B';
    }

    for(int i=0; i<t; i++)
    {
        int k;
        cin >> k;

        string s;
        cin >> s;

        size_t pos = st.find(s);

        if (pos != string::npos)
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
