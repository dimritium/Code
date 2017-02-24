#include<iostream>
#include<string>
int siz(char *);
using namespace std;
int main()
{
   char *a[]={"Hearts","Spades","Diamonds","Clubs"};
    for(int i=0;i<4;i++)
    {
        int c=siz(a[i]);
     cout<<c<<"\n";
    }
    return 0;
}
int siz(char *b)
{
    int count1=0,i=0;
    while(*b!='\0')
    {
        count1++;
        b++;
    }
    return count1;
}
