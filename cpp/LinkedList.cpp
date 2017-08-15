#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long 
#define MOD 1000000007
#define pb push_back

using namespace std;

class Node{
public:
    int data;
    Node *next;
     Node(int data){
        this->data = data;
        this->next = NULL;
     }
};

class LinkedList{
    
};

int main()
{
    Node *head = new Node(5);
    Node *second = new Node(10);
    Node *third = new Node(15);
    Node *fourth = new Node(20);
    head->next = second;
    cout<<head->data;
}