#include<bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define MOD 10000000007

using namespace std;

struct treeNode
{
	int data;
	struct treeNode *left;
	struct treeNode *right;
};
void preOrtr(struct treeNode *root)
{
	if(root)
	{
	cout<<root->data;
	preOrtr(root->left);
	preOrtr(root->right);
	}
}
int main()
{
	treeNode *x=new treeNode();
	treeNode *y=new treeNode();
	treeNode *z=new treeNode();
	x->data=5;
	x->left=y;
	x->right=z;
	y->data=6;
	y->left=y->right=NULL;
	z->data=7;
	z->left=z->right=NULL;
	preOrtr(x);
	return 0;
}