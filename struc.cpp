#include<bits/stdc++.h>
#include<cstring>
using namespace std;
struct stud
{
    string name;
    string id;
    string clas;
};
int main()
{
    stud x1[3];
    for(int i=0;i<3;i++)
    {
        cout<<"Enter name of "<<i+1<<" student : ";
        cin.ignore();
        getline(cin,x1[i].name);
        cout<<"Enter id of student : ";
        cin>>(x1[i].id);
        cout<<"Enter class : ";
        cin>>x1[i].clas;
    }
    for(int i=0;i<3;i++)
    {
        cout<<"Name of student : "<<i+1<<" "<<x1[i].name<<endl;
        cout<<"ID of student : "<<i+1<<" "<<x1[i].id<<endl;
        cout<<"Class of student : "<<i+1<<" "<<x1[i].clas<<endl;
        cout<<endl;
    }
    return 0;
}
