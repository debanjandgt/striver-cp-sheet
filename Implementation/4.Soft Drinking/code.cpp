#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p>> nl>> np;
    int totalLit = (k*l)/nl;
    int cnt=0;
    int totalSli=(c*d);
    p/=np;
    cnt= min(totalLit,min(p,totalSli));
    cnt/=n;
    cout << cnt << endl;
}
