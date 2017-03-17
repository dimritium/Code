#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;
class Base
{
    private:
    int m_x;
public:
Base()
{

}
    Base(int x):m_x(x)
    {
        cout<<"Base()";
    }
    ~Base()
    {
        cout<<"~Base()";
    }
    virtual void print()
    {
        cout<<"Base "<<m_x;
    }
    virtual void mx() = 0;
};

class Derived : public Base{
    private:
    int m_d;
    public:
    Derived(){}
    Derived(int y):m_d(y)
    {
        cout<<"Derived()";
    }
    ~Derived()
    {
        cout<<"~Derived()";
    }
    void print(){
        cout<<"md"<<m_d;
    }
    void mx(){
        cout<<"Mx";
    }
};

int main()
{

 Derived* b = new Derived(5);
 b->print();
 b->mx();
}