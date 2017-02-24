#include<bits/stdc++.h>
using namespace std;
#define fl(i,b,c) for(i=b;a<=c;a++)
class spoPalin
{
public:
};
int main()
{
 long long int tc;
 cin>>tc;
 while(tc--)
 {
 	string s,h1,h2,s2,h1pr;
 	cin>>s;
 	s2=s;
 	long long int len=s.size();
 	if(len%2==0){
 	h1=s.substr(0,s.size()/2);
 	h1pr=h1;
 	h2=s.substr(s.size()/2);
 	}
 	else
 	{
 	h1=s.substr(0,s.size()/2);
 	h1pr=h1;
 	mid=s[s.size()/2];
 	h2=s.substr(s.size()/2+1);	
 	}
 	reverse(h1.begin(),h1.end());
 	if(len%2==0)
 	{
 		if(stoi(h1)>stoi(h2))
 		{
 			cout<<h1pr+h1;
 		}
 	}
 }
 return 0;
}