//in tree we have data and left and right node
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node* right;
};
/*newNode() allocates new node with the given data and Null left and right pointers*/
struct node* newNode(int data)
{
    //allocates memory for new node
    struct node* node=(struct node*)malloc(sizeof(struct node));
    node->data=data;
    //initialize left and right children as NULL
    node->left=NULL;
    node->right=NULL;
    return node;
};
int main()
{
    struct node *root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    getchar();
    return 0;
}
