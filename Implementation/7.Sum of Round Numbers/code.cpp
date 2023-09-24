#include<bits/stdc++.h>
using namespace std;
int main()
{
	int c;
	cin >> c;
	while (c)
	{
		c--;
		int n;
		cin >> n;
		int t = 0;
		vector<int> ans;
		while (n)
		{
			int e = n % 10;
			int v = e * pow(10, t);
			t++;
			n /= 10;
			if (v != 0)
				ans.push_back(v);
		}
		cout << ans.size() << endl;
		for (auto i : ans)
			cout << i << " ";
		cout << endl;
	}
	return 0;

}
