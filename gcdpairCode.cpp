// CodeChef submission 14610838 (C++14) plaintext list. Status: AC, problem BYTES4, contest CODECHEF. By saroj (saroj), 2017-07-18 23:07:23.
#include <bits/stdc++.h>
using namespace std;
int marka[1000001];
 
int main() {

 
	int t;
	cin >> t;
	while (t--) {
		int n, MAX = -1;
		vector<int> a, b;
		cin >> n;
		a.resize(n);
		memset(marka, 0, sizeof(marka));
		int ans = 0,j;
		for (int i = 0; i < n; i++)
			cin >> a[i], marka[a[i]]++, MAX = max(a[i], MAX);
		for (int i = MAX; i >= 1; i--) {
			int c = 0;
			for (j = i; j <= MAX; j += i) {
				c += marka[j];
                cout<<"i,j "<<i<<" "<<j<<endl;
			}
			if (c > 1) {
				ans = i;
                if (marka[j-i]>0 && marka[i]>0){
                    cout<<i+(j-i);
                    break;
                }
			}
		}
		// cout << ans << endl;
	}
	return 0;
}