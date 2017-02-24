#include<iostream>
using namespace std;
int min1=0,st,en;
int maxSubArraySum(int a[], int size)
{
    int flag=0;
   int max_so_far = a[0];
   int curr_max = a[0];

   for (int i = 1; i < size; i++)
   {
        curr_max = max(a[i], curr_max+a[i]);
        if(curr_max>max_so_far)
        {
            if(flag==0)
            {
                flag=1;
                st=i;
            }
            if(flag==1)
            {
                en=i;
            }
        }
        max_so_far = max(max_so_far, curr_max);

   }
   return (max_so_far);
}

/* Driver program to test maxSubArraySum */
int main()
{
   int a[] =  {3,-6,4,2,-1,5};
   int n = sizeof(a)/sizeof(a[0]);
   int max_sum = maxSubArraySum(a, n);
   for(int i=st;i<en;i++)
   {
       if(a[i]<min1&&a[i]<0)
        min1=a[i];
   }
   cout << "Maximum contiguous sum is " << (max_sum)+(min1*-1);
   return 0;
}
