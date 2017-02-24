#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<time.h>
using namespace std;
void print(int row,int col,int k);
void delay(unsigned int mseconds);

void print(int ro,int col,int k)
{
 int i,j,l;
    string a[ro][col];
    for(i=0;i<ro;i++)
        for(j=0;j<col;j++)
            if(i==0||i==ro-1)
        a[i][j]="_";
        else
            a[i][j]="|";
    for(i=1;i<ro-1;i++)
        for(j=1;j<col-1;j++)
        a[i][j]=" ";
         for(l=1;l<=k;l++)
            cout<<"\n";
    for(i=0;i<ro;i++)
    {
        for(l=1;l<=k;l++)
            cout<<" ";
        for(j=0;j<col;j++)
        {
        cout<<a[i][j];
        if(a[i][j]!=" ")
        delay(100);
        }
        cout<<"\n";
    }
}
int main()
{
    int ro,col,i,j,k,l ;
    cout<<"Enter row and col"<<"\n";
    cin>>ro>>col;
    for(i=ro,j=col,k=1;i>=1,j>=2;i=i/2,j=j/2,k+=5)
    {
        print(i,j,k);
       delay(2000);
        system("cls");
    }
 for(l=1;l<=k;l++)
            cout<<"\n";
             for(l=1;l<=k;l++)
            cout<<" ";
            cout<<"SHUBHANKAR";
    return 0;
}

void delay(unsigned int mseconds)
{
    clock_t goal=mseconds+clock();
    while(goal>clock());
}
