#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

class Retail
{
   char category[50]; 
   char item[50];
   int qty;
   float price;
   Retail()
   {
       strcpy(category,"cereal");
       strcpy(item,"rice");
       qty=100;
       price=25;
   }
   public:
   void show()
   {
       cout<<category<<" "<<item<<" "<<qty<<" "<<price;
   }
};
int main()
{
    Retail R;
    R.show();
}