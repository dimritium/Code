#include<iostream>
using namespace std;
bool A[10][10];
void initialise()
{
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
        A[i][j]=false;
}
int main()
{
    int x,y,nodes,edges;
    initialise();
    cin>>nodes;
    cin>>edges;
    for(int i=0;i<edges;i++)
    {
        cin>>x>>y;
        A[x][y]=true;
    }
   for(int i=0;i<nodes;i++)
     for(int j=0;j<nodes;j++)
     if(A[i][j]==true)
        cout<<"We have a edge at "<<i<<" "<<j<<"\n";
     else
        cout<<"We dont have a edge at "<<i<<" "<<j<<"\n";
        return 0;
}
