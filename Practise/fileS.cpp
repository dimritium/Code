#include<iostream>
#include<fstream>
int main()
{
    ofstream outf("ITEM");
    cout<<"Enter Item name: ";
    char name[30];
    cin>>name;
    outf<<name<<"\n";
    cout<<"Enter item cost: ";
    float cost;
    cin>>cost;
    outf(cost);
    outf.close;
    ifstream inf("ITEM");
    inf>>name;
    inf>>cost;
    cout<<"\n";
    cout<<"Item name: "<<name<<"\n";
    cout<<"Item cost: "<<cost<<"\n";
    inf.close();
    return 0;
}
