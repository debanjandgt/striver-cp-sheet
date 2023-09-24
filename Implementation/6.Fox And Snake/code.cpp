#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin >> r >> c;
    int flag=1;
    vector<vector<char>> vec(r,vector<char>(c,'.'));
    r--;
    c--;
    int r1=0,c1=0,pf=-1;
    while(true)
    {
        if(flag == 1)
    {
        for(int j=c1;j<=c;j++)
        {
            vec[r1][j]='#';
        }
        c1=c;
        flag =3;
        pf=1;
    }
    else if(flag == 3)
    {
        if(r1+1 > r)
        break;
        vec[r1+1][c1]='#';
        vec[r1+2][c1]='#';
        r1+=2;
        if(pf == 1)
        flag =2;
        else
        flag =1;
    }
    else if (flag == 2)
    {
      for(int j=c1;j>=0;j--)
        {
            vec[r1][j]='#';
        }
        c1=0;
        flag =3; 
        pf=2;
    }
   }
   for(int i=0;i<=r;i++)
   {
       for(int j=0;j<=c;j++)
       {
           cout << vec[i][j] << "";
       }
       cout << endl;
   }
}
