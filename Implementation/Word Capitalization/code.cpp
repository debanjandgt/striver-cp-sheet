#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cin >> name;
    if(name.size())
    {
        int as=(int)name[0];
        if(as >= 65 && as <=90)
        {
            
        }
        else if(as >= 97 && as <=122)
        {
            as-=32;
            char c=char(as);
            name[0]=c;
        }
    }
    cout <<  name << endl;
}
