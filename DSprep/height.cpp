#include<bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define MOD 10000000007

using namespace std;

struct node
{
	int data;
	struct node *left;
	struct node *right;
};
int MaxDepth(struct node *node)
{
	if (node==NULL)
		return 0;
	else
	{
		 	return max(MaxDepth(node->left),MaxDepth(node->right))+1;

	}
}
struct node *newNode(int data)
{
	struct node* node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;

	return (node);
}
int main()
{
	struct node *root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->left=newNode(4);
	root->left->right=newNode(5);
	printf("Max height %d\n",MaxDepth(root));
	getchar();
	return 0;
}