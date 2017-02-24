//use of bad_alloc exception
#include<iostream>
using namespace std;
class sample
{
	private:
		int data1;
		char data2;
		public:
			void set(int i,char c)
			{
				data1=i;
				data2=c;
			}
			void display(void)
			{
				cout<<"Data1 = "<<data1;
				cout<<"Data2= "<<data2;
			}
};
int main()
{
	sample *s_ptr;
	try
	{
		s_ptr=new sample;
	}
	catch(bad_alloc ba)
	{
		cout<<"Bad allocation..the program will terminate";
		return 1;
	}
	s_ptr->set(25,'A');
	s_ptr->display();
	delete s_ptr;
	return 0;
}

