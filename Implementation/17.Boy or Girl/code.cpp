#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<char> st;
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++)
    {
        st.insert(s[i]);
    }
    bool ans=st.size()%2;
    if(ans)
    cout << "IGNORE HIM!" << endl;
    else
    cout << "CHAT WITH HER!" << endl;
    
}
