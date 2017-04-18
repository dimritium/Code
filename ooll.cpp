#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long long int countbit (long long int n)
{
long long int count = 0;
while(n > 0){
n = n&(n-1);
count++;
}
return count;
}
int main()
{
int t;
scanf("%d", &t);
while(t--)
{
long long int n;
scanf("%lld", &n);
long long int a[n];
long long int i, j, temp;
for(i = 0; i < n; i++){
scanf("%lld", &a[i]);
}
for(i = 0; i < n-1; i++) {
for(j = i; j < n; j++) {
if(countbit(a[i]) > countbit(a[j])) {
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
}
for(i = 0; i < n; i++) {
printf("%lld ", a[i]);
}
for(i = 0; i < n; i++) {
a[i] = 0;
}
}
return 0;
}