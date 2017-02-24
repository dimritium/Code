#include<iostream>
using namespace std;
int main()
{
    int x,y,edges,nodes;
    bool a[10][10]={false};
    cin>>nodes;
    cin>>edges;
    for(int i=0;i<edges;i++)
    {
        cin>>x>>y;
        a[x][y]=true;
    }
    if(a[3][4]==true)
        cout<<"Theres an edge";
    else
        cout<<"No edge there";
         if(a[5][1]==true)
        cout<<"Theres an edge";
    else
        cout<<"No edge there";
    return 0;
}
