#include<bits/stdc++.h>
using namespace std;
int main(){
    int (*p)[10];
    for(int i=0; i<3; i++){
        for(int j=0;j<6;j++){
            p[i][j] = j;
            cout<<p[i][j];
        }
    }
    // for(int i=0; i<3; i++){
    //     for(int j=0;j<10;j++){
    //         cout<<p[i][j];
    //     }
    //     cout<<"\n";
    // }
}