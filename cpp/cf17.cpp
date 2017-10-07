#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back
#define MOD 1000000007
using namespace std;

int main()
{
    int arr[5][5],pos_x,pos_y,i,j;
    fl(i,0,5){
        fl(j,0,5){
            cin>>arr[i][j];
            if(arr[i][j]){
                pos_x = i;
                pos_y = j;
            }
        }
    }
    // cout<<pos_x<<" "<<pos_y<<endl;
    cout<<(abs(2-pos_x)+abs(2-pos_y));
}