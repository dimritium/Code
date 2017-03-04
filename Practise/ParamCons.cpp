//Parameterized constructor
#include<iostream>
using namespace std;
class Point
{
	int x,y;
	public:
		Point(){
		}
		Point (int a, int b)
		{
			x=a;
			y=b;
		}
		void display()
		{
			cout<<x<<" "<<y;
		}
};
int main()
{
	Point p1(1,1);
	Point p2(5,10);
	Point p3;
	cout<<"Point p1 = "<<"\n"<<p3.x;
	p1.display();
	cout<<"Point p2 = ";
	p2.display();
	return 0;
}
/*multiple constructors in a class
class integer
{
	int m,n;
	public:
	integer(){m=0;n=0;}
	integer(int a,int b)
	{
	m=a;n=b;}
	intrger(integer &i)
	{
	m=i.m; n=i.n}
	
	int main()
	...
	...
	integer I3(I2);// copy constructor copies values of I2 to I3
};
*/
