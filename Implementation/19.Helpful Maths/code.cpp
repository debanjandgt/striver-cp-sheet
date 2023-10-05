#include<bits/stdc++.h>
using namespace std;
static bool cmp(pair<char,int> p1,pair<char,int> p2)
{
    return p1.first < p2.first;
}
int main()
{
   string expression;
   map<char,int> mp;
   cin >> expression;
   for(int i=0;i<expression.size();i++)
   {
       char ch=expression[i];
       if(ch!= '+')
       mp[ch]++;
   }
   vector<pair<char,int>> vec(mp.begin(),mp.end());
   sort(vec.begin(),vec.end(),cmp);
   string ans;
   for(auto it:vec)
   {
       char c=it.first;
       int v=it.second;
       while(v)
       {
           ans=ans+c+"+";
           v--;
       }
   }
   ans.pop_back();
   cout << ans << endl;
}
