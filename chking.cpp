#include<iostream>
using namespace std;
#include<vector>
int main()
{
    int a=5;
    {
        a=8;
    }
    cout<<a;
    return 0;
}
