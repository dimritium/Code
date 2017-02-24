#include<bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define MOD 10000000007

using namespace std;

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node *newNode(int data)
{
	struct node *newn=(struct node *)malloc(sizeof(struct node));
	newn->data=data;
	newn->left=NULL;
	newn->right=NULL;
	return newn;
}
void printl(struct node *r)
{
	if(r){
		cout<<r->data;
		printl(r->left);
		printl(r->right);
	}
}
int main()
{
	struct node *root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->left=newNode(4);
	printl(root);
}