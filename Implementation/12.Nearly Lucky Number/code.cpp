#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long number;
    cin >> number;
    int cnt=0;
    while(number)
    {
        int a=number%10;
        if( a== 4 || a==7)
        cnt++;
        number/=10;
    }
    int f=0;
    string x=to_string(cnt);
    for(int i=0;i<x.size();i++)
    {
        if(x[i] != '4' && x[i] !='7')
        {
            cout << "NO" << endl;
            f=1;
            break;
        }
    }
    if(f == 0)
    cout << "YES" << endl;
}
