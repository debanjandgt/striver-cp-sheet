#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cin >> s;
    bool flag =0;
    for(int i=0;i<s;i++)
    {
        int a;
        cin >> a;
       if(a == 1)
       flag =1;
    }
    if(flag)
    cout << "HARD" << endl;
    else
    cout << "EASY" << endl;
    
    
}
