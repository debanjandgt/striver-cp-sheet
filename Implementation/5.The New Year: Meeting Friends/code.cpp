#include<bits/stdc++.h> 
using namespace std;
int main()
{
    vector<int> vec;
    for(int i=0;i<3;i++)
    {
        int a;
        cin >> a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    cout << (vec[1]-vec[0]) + (vec[2]-vec[1]);
    
}
