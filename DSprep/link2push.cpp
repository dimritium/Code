#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
void push(struct node **head_ref,int new_data);
void insertAfter(struct node *prev_node,int new_data);
void append(struct node **head_ref,int new_data);
void printL(struct node *n);
struct node{
	int data;
	struct node *next;
};
void push(struct node **head_ref,int new_data)
{
	struct node *new_node=(struct node *)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=(*head_ref);
	(*head_ref)=new_node;
}
void insertAfter(struct node *prev_node,int new_data)
{
	if(prev_node==NULL)
	{
		cout<<"Data cant be entered\n";
		return;
	}
	struct node *new_node=(struct node *)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=prev_node->next;
	prev_node->next=new_node;
}
void append(struct node **head_ref,int new_data)
{
	struct node *new_node=new node();
	new_node->data=new_data;
	struct node *last=*head_ref;
	new_node->data=new_data;
	new_node->next=NULL;
	while(last->next!=NULL)
	{
		last=last->next;
	}
	last->next=new_node;
	return;
}
void printL(struct node *n)
{
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
}
void deleteNode(struct node **head_ref,int key)
{
	struct node *temp=*head_ref,*prev;
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
void delAll(struct node **head_ref,int key)
{
	struct node *temp=*head_ref,*prev;
	
	while(temp!=NULL && temp->data==key)
	{
		*head_ref=temp->next;
		free(temp);
		temp=*head_ref;
	}
	while(temp!=NULL)
	{
		prev=temp;
		if(temp->data==key)
		{
			prev->next=temp->next;
			free(temp);
		}
		temp=prev->next;
	}
	if(temp==NULL)
		return;
}
void deleteNodePos(struct node **head_ref,int position)
{
	if(*head_ref==NULL)
		return;
	struct node *temp=*head_ref,*prev;
	int c=0;
	if(position==0)
	{
		*head_ref=temp->next;
		free(temp);
		return;
	}
	while(temp!=NULL && c!=position)
	{
		c++;
		prev=temp;
		temp=temp->next;
	}
	if(temp==NULL)
		return;
	prev->next=temp->next;
	free(temp);
}
int main()
{
	struct node *head=NULL;
	append(&head,6);
	push(&head,7);
	push(&head,1);
	insertAfter(head->next,8);
	deleteNode(&head,7);
	cout<<"Created link list\n";
	printL(head);
	return 0;
}