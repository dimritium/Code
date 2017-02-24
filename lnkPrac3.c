//inserting a node at front
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
struct node *next;
};
int main()
{
	int tc=4;
	struct node *head=NULL;
while(tc--)
{
int n;
   printf("Enter data to push\n");
scanf("%d",&n);
push(&head,n);
}
printl(head);
return 0;
}
void push(struct node**head_ref, int new_data)
{
	struct node *new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=new_data;
new_node->next=*head_ref;
*head_ref=new_node;
printf("pushed");
}
void printl(struct node *n)
{
	while(n!=NULL)
  {
	printf("%d",n->data);
n=n->next;
}
}
