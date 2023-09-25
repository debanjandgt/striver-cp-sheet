#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> m;
    m["Icosahedron"]=20;
    m["Tetrahedron"]=4;
    m["Cube"]=6;
    m["Octahedron"]=8;
    m["Dodecahedron"]=12;
    int sum=0;
    int c;
    cin >> c;
    while(c)
    {
        c--;
        string s;
        cin >> s;
        sum+=m[s];
    }
    cout << sum << endl;
}
