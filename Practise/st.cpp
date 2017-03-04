#include<iostream>
using namespace std;
class staticFun
{
	static int count;
	public:
		static void setCount()
		{
			count++;
		}
		int displayCount()
		{
			cout<<count;
		}
		
};
int staticFun::count=15;
int main()
{
	staticFun obj1;

	staticFun::setCount();
	obj1.displayCount();
}
