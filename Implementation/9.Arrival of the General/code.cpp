#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cin >> s;
    vector<int> vec;
    int maxElem=-1e9,maxPos=-1;
    for(int i=0;i<s;i++)
    {
        int a;
        cin >> a;
        vec.push_back(a);
        if(a > maxElem)
        {
            maxElem=a;
            maxPos=i;
        }
    }
    int prev1=maxPos;
    int cnt=0;
    while(vec[0] != maxElem)
    {
        int prev2 = maxPos-1;
        swap(vec[maxPos],vec[prev2]);
        maxPos=prev2;
        cnt++;
    }
    int minPos=-1,minElem=1e9;
    for(int i=0;i<s;i++)
    {
        if(vec[i] <= minElem)
        {
            minPos=i;
            minElem=vec[i];
        }
    }
    prev1=minPos;
    while(vec[vec.size()-1] != minElem)
    {
        int prev2=minPos+1;
        swap(vec[prev2],vec[minPos]);
        minPos=prev2;
        cnt++;
    }
    cout << cnt << endl;
    
}
