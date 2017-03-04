#include<bits/stdc++.h>
using namespace std;
vector<string>hashTable[20];
int hashTableSize=20;
void insert(string s)
{
    int index=hashFunc(s);
    hashTable[index].push_back(s);
}
void search(string s)
{
    int index=hashFunc(s);
    for(int i=0;i<hashTable[index].size();i++)
    {
        if(hashTable[index][i]==s)
        {
            cout<<s<<" is found"<<endl;
            return;
        }
    }
    cout<<s<<" is not found"<<endl;
}
int main()
{
    string
}
