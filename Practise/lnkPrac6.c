#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
struct node *next;
};
void push(struct node **head_ref,int new_data)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
new_node->next=*head_ref;
*head_ref=new_node;
}
void deleteNode(struct node** head_ref,int key)
{
	struct node *temp=*head_ref,*prev_node;
    if(temp!=NULL && temp->data==key)
   {
	*head_ref=temp->next;
 free(temp);
return;
}
while(temp!=NULL && temp->data!=key)
{
	prev_node=temp;
temp=temp->next;
}
if(temp==NULL)
return;
prev_node->next=temp->next;
free(temp);
}
void printl(struct node *n)
{
	while(n!=NULL)
  {
	printf("%d\n",n->data);
n=n->next;
}
}
int main()
{
	struct node *head=NULL;
push(&head,5);	
push(&head,7);
push(&head,8);	
push(&head,85);
push(&head,44);	
push(&head,65);
push(&head,77);	
push(&head,89);
deleteNode(&head,85);
printl(head);
return 0;
}
