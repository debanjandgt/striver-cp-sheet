#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cin >> s;
    map<int,int> m;
    int t=1;
    for(int i=0;i<s;i++)
    {
        int val;
        cin >> val;
        m[val]=t;
        t++;
    }
    vector<pair<int,int>> vec(m.begin(),m.end());
    sort(vec.begin(),vec.end());
    for(auto i:vec)
    {
        cout << i.second <<" " ;
    }
    cout << endl;
    
    
}
