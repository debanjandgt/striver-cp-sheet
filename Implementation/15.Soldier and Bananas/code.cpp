#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int t=1,sum=0;
    for(int i=1;i<=c;i++)
    {
        sum+=(t*a);
        t++;
    }
    if(sum == b || b > sum)
    cout << 0 << endl;
    else
    cout << sum-b << endl;
}
