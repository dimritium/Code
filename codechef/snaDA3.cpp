#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,a1,a2,d1,d2,aa2,dd2,temp,temp_d,i;
    cin>>tc;
    while(tc--)
    {
        cin>>a1>>a2>>d1>>d2;
        if(d1 == 1 || d2==1)
            cout<<0<<endl;
        else if(d1 > d2)
        {
            dd2=d2;
            d2=d1;
            d1=dd2;

            aa2=a2;
            a2=a1;
            a1=aa2;
            if(d2%d1==0)
                cout<<abs((a2-a1)%min(d2,d1))<<endl;
            else{
            temp=(a2-a1)%d1;
            temp_d=d2%d1;
            if((d1-temp)%temp_d==0)
                i=(d1-temp)/temp_d;
            else
                i=((temp)+(d1-temp)/d2%d1)%d1;

            cout<<(abs((((a2-a1)%d1 + ((d2%d1)*(i%d1))%d1)))%d1)<<endl;
         }
        }

        else if(d2>d1)
        {
            if(d2%d1==0)
                cout<<abs((a2-a1)%min(d2,d1))<<endl;
            else{
            temp=(a2-a1)%d1;
            temp_d=d2%d1;
            if((d1-temp)%temp_d==0)
                i=(d1-temp)/temp_d;
            else
                i=((temp)+(d1-temp)/d2%d1)%d1;
            cout<<(abs(((a2-a1)%d1 + ((d2%d1)*(i%d1))%d1))%d1)<<endl;
           }
        }
        else if(d1==d2)
            cout<<(abs((a2-a1)%d1))<<endl;

    }
    return 0;
}
