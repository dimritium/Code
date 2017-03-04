#include<bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define MOD 10000000007

using namespace std;

struct node
{
	int data;
	struct node* left;
	struct node* right;
};
int MaxDepth(struct node * node)
{
	if(node==NULL)
		return 0;
	else
	{
		int ldepth=MaxDepth(node->left);
		int rdepth=MaxDepth(node->right);
		if(ldepth>rdepth)
			return ldepth+1;
		else
			return rdepth+1;
	}
}
struct node* newNode(int data)
{
	struct node *node=(struct node*)malloc(sizeof(sruct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}
int main()
{
	
}