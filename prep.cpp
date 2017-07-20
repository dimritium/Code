#include <bits/stdc++.h>
#include<string.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;
int num[10][10];

int main()
{
    for(int i = 0; i<10; i++){
        for(int j = 0; j<10;j++){
            num[i][j] = i+j;
        }
    }
    int c = 0;
    for(int t = 0; t<10; t++){
        for(int j = 0; j<10; j++){
            c++;
            cout<<(*((int *)num + t*10+j))<<" ";
        }
    }
    cout<<"\ncount "<<c<<" "<<*((int *)num)<<" ";
    int arra[] = {1,2,3};
    char s[] = "asda";
    int *a;
    int u = 5;
    a = (int *)&u;
    volatile int *p = (int *)0x400bad;
    *p = 10;
    cout<<"p "<<p<<"\n";
    // *p = 10;
    cout<<"a "<<*a<<"\n";

    cout<<"\n"<<strlen(s);

    // char *s1 = (char *)"asdas";
    // cout<<"res"<<" "<<strchr(s1,'d')<<" "<<strstr(s1,"sd")<<strcmp(s1,"asds");

}