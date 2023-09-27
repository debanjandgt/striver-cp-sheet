#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c;
    cin >> c;
    int sum=0,maxi=-1e9;
    while(c)
    {
        c--;
        int a,b;
        cin >> a >> b;
        if(a == 0)
        sum += b;
        else
        {
            sum=(sum-a)+(b);
        }
        maxi=max(maxi,sum);
    }
    cout << maxi << endl;
}
