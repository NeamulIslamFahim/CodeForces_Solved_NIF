#include<bits/stdc++.h>
using namespace std;
const int sizes=100005;


int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);
}

int main()
{
    int t, a[sizes];
    scanf("%d",&t);
    while(t--)
    {
        int n;
        cin>>n;

        int tmp=0;
        for(int i=1; i<=n; ++i)
        {
            cin>>a[i];
            tmp=gcd(tmp,a[i]);
        }
        cout<<a[n]/tmp+(a[1]==0)<<endl;
    }
    return 0;
}
