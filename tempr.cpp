#include<iostream>
using namespace std;
#define fl(z,aa,b) for(z=aa;z<=b;z++)
int m,n;
void inse(int,int);
int lar(int ar[10][31],int,int);
int sm(int ar[10][31],int,int);
	int a[10][31];
class temp
{
	public:
		int i,j,b,aa,z;
		void inse(int m,int n)
		{
		   a[m][n];
			fl(i,0,m-1)
			 fl(j,0,n-1)
			 	cin>>a[i][j];	
	   }
	   int lar(int ar[10][31],int k,int l)
	   {
	   	ar[k][l];
	   	int lr=0,lc=0;
	   	int lar=ar[0][0];
	   	fl(i,0,k-1)
	   	{
	   	 fl(j,0,l-1)
	   	  {
	   	  	if(ar[i][j]>lar)
	   	  	{
	   	  	 lar=a[i][j];
	   	  	 lr=i;
	   	  	 lc=j;
			 }
	      }
		}
	    
			 cout<<"Largest value = "<<lar<<"\n";
			 cout<<"At pos = "<<lr<<" "<<lc<<"\n";
	   }
	   int sm(int ar[10][31],int k,int l)
	   {
	   	  ar[k][l];
	   	int sr=0,sc=0;
	   	int sm=ar[0][0];
	   	
	   	fl(i,0,k-1)
	   	{
	   	 fl(j,0,l-1)
	   	  {
	   	  	if(ar[i][j]<sm)
	   	  	{
	   	  	 sm=a[i][j];
	   	  	 sr=i;
	   	  	 sc=j;
			 }
	      }
		}
	    
			 cout<<"Smallest value = "<<sm<<"\n";
			 cout<<"At pos = "<<sr<<" "<<sc<<"\n";
	   }
};
int main()
{
	temp x1,x2,x3;
	cout<<"Enter rows and cols\n";
	cin>>m>>n;
	x1.inse(m,n);
	x1.lar(a,m,n);
	x1.sm(a,m,n);
	return 0;	
}
