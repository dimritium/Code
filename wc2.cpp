#include <bits/stdc++.h>
using namespace std;
int markb[1000001];
int marka[1000001];

int main() {
	int t;
		int n, MAX_A = -1, MAX_B = -1;
		vector<int> a, b;
		cin >> n;
		a.resize(n);
        b.resize(n);
		memset(marka, 0, sizeof(marka));
		int ans = 0;
		for (int i = 0; i < n; i++)
			cin >> a[i], marka[a[i]]++,MAX_A = max(a[i], MAX_A);
        for (int j = 0; j<n; j++)
            cin >> b[j], markb[b[j]]++, MAX_B = max(b[j],MAX_B);
        if (MAX_A > MAX_B){
            for(int i = 0; i<n; i++)
                swap(a[i],b[i]);
            for(int i = 0;i<1000001; i++)
                swap(marka[i],markb[i]);
            swap(MAX_A,MAX_B);
            // cout<<"M "<<MAX_A<<" "<<MAX_B<<a[0]<<" "<<b[0]<<endl;
        } 
        int j,i,last_f;
        int in_ans = 0;
        vector<int>sum;
		for (i = MAX_A; i >= 1; i--) {
			int c = 0;
            c+=marka[i];
            if(c>0){

			for (j = i; j <= MAX_B; j += i) {
                // cout<<"i, j "<<i<<" "<<j<<endl; 
				c += markb[j];
                if(markb[j]>0 && c>1){
                    last_f = j;
                    // cout<<"lf "<<last_f<<endl;
                    
                }
			}
            
            // cout<<"c"<<c<<endl;
			if (c > 1) {
				// ans = (i+(j-i));
                // cout<<"las "<<last_f<<"\n";
                    if(i!=1){
                        in_ans=1;
                        cout<<(long long)(i+last_f);
                    }
                    break;
                // cout<<ans<<"\n";
				// break;
			}
		    }
        }
        if(!in_ans && i==1)
        cout<<(long long)(MAX_A+MAX_B);
		// cout << ans << endl;
	return 0;
}