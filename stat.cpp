#include<bits/stdc++.h>
using namespace std;
class item
{
    static int count;
    int number;
public:
    void getdata(int a)
    {
        number=a;
        count++;
    }
   static void getcount(void)
    {
        cout<<"count: ";
        cout<<count<<"\n";
    }
};
int item::count;
int main()
{
    item a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(100);
    b.getdata(100);
    c.getdata(100);
    item::getcount();

    a.getcount();
     b.getcount();
    c.getcount();
    return 0;
}
