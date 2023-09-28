#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    while(b)
    {
        int r=a%10;
        if(r!=0)
        {
            a--;
        }
        else
        {
            a/=10;
        }
        b--;
    }
    cout << a<< endl;
}
