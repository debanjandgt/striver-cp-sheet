#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cx=-1,cy=-1;
    for(int i=0;i<=4;i++)
    {
        for(int j=0;j<=4;j++)
        {
            int val;
            cin >> val;
            if( val == 1)
            {
                cx=i;
                cy=j;
            }
        }
    }
    int swaps=abs(2-cx)+abs(2-cy);
    cout << swaps << endl;
}
