#include<bits/stdc++/h>
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
	struct node *new_node=new node();
	new_node->data=new_data;
	new_node->next=(*head_ref);
	(*head_ref)=new_node;
}
void insertAfter(struct node *prev_node,int new_data)
{
	if(prev_node==NULL)
	{
		cout<<"Data cant be enetered";
		return;
	}
	struct node *new_node=new node();
	new_node->data=new_data;
	new_node->next=prev_node->next;
	prev_node->next=new_node;
}
void append(struct node **head_ref,int new_data)
{
	node *new_node=new node();
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
	struct node *temp=*temp_ref,*prev;
	if(temp!=NULL &&temp->data==key)
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
