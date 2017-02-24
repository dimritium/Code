//node after a given node
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
struct node *next;
};
int main()
{
	struct node *head,*second;
head=(struct node *)malloc(sizeof(struct node));
second=(struct node *)malloc(sizeof(struct node));
head->data=1;
head->next=second;
second->data=2;
second->next=NULL;
insertAfter(head,5);
printl(head);
return 0;
}
void insertAfter(struct node*prev_node,int new_data)
{
	if(prev_node==NULL)
{
	printf("The given previous node can not be null");
return;
}
struct node* new_node=(struct node *)malloc(sizeof(struct node));

new_node->data=new_data;
new_node->next=prev_node->next;
prev_node->next=new_node;
}
void printl(struct node *n)
{
	while(n!=NULL)
  {
	printf("%d",n->data);
n=n->next;
}
}
