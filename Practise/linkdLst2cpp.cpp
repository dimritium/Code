#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node* next;
};
void push(struct node** head_ref, int new_data)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=(*head_ref);
	(*head_ref)=new_node;
}
void insertAfter(struct node* prev_node, int new_data,int x1)
{
 int i;
	if(prev_node==NULL)
	{
		printf("the given previous node cannot be null");
	return;
	}
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	for(i=0;i<x1;i++)
	 prev_node=prev_node->next;
	new_node->data=new_data;
	new_node->next=prev_node->next;
	prev_node->next=new_node;
}
void append(struct node** head_ref, int new_data)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	struct node* last=*head_ref;
	new_node->data=new_data;
	new_node->next=NULL;
	if(*head_ref==NULL)
	{
		*head_ref=new_node;
		return;
	}
	while(last->next!=NULL)
	 last=last->next;

	 last->next=new_node;
}
void delete_node(struct node** head_ref, int key)
{
 struct node *temp= *head_ref, * prev;
 if(temp!=NULL && temp->data==key)
  {
   *head_ref=temp->next;
   free(temp);
   return;
   }
   while(temp!=NULL && temp->data!=key)
   {
   prev=temp;
   temp=temp->next;
   }
   if(temp==NULL)
    return;
    prev->next=temp->next;
    free(temp);
 }
int printList(struct node* n)
{

	while(n!=NULL)
	{
		printf("%d ",n->data);
		n=n->next;
	}
}
int main()
{
	struct node* head=NULL;
	char chh='y';
int i;
	char ch;
printf("1 for inserting at end\n2 for inserting at beginning\n3 for deleting a node\n4 for inserting at a given location\n5 terminating\n");

while(chh=='y'||chh=='Y')
{
	printf("\nEnter choice:\n");
	fflush(stdin);
	scanf("%c",&ch);
	switch(ch)
	{
	case '1': printf("Enter no\n");
	         int nno;
	         scanf("%d",&nno);
	         append(&head,nno);
              printf("List entered:\n");
              printList(head);
	         break;
    case '2':printf("Enter no\n");
             int n2;
             scanf("%d",&n2);
             push(&head,n2);
printf("List entered:\n");
              printList(head);
             break;
    case '3': printf("Enter no to delete\n");
              int n3;
              scanf("%d",&n3);
              delete_node(&head,n3);
printf("List entered:\n");
              printList(head);
              break;
    case '4': printf("Enter index position after you want to insert element and the element\n");

              int x,y;
              scanf("%d%d",&x,&y);
              insertAfter(head,y,x);
printf("List entered:\n");
              printList(head);
              break;

          default:chh='n';
              break;

	}

}
	return 0;
}


