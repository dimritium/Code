#include<iostream>
using namespace std;
class sample
{
    int a=5;
    int b=10;
public:
    friend float mean(sample s);
};
float mean(sample s)
{
    return float(s.a+s.b)/2;
}
int main()
{
    sample X;
    cout<<"Mean value is "<<mean(X)<<"\n";
    return 0;
}
