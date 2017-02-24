#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *next;
};
void sortedInsert(struct node **,struct node *);
void insertionSort(struct node **head_ref)
{
	struct node *sorted=NULL;
	struct node *current=*head_ref;
	while(current!=NULL)
	{
		struct node *next=current->next;
		sortedInsert(&sorted,current);
		current=next;
	}
	*head_ref=sorted;
}
void sortedInsert(struct node **head_ref,struct node *new_node)
{
	struct node *current;
	if(*head_ref==NULL||(*head_ref)->data >= new_node->data)
	{
		new_node->next=*head_ref;
	*head_ref=new_node;
	}
	else 
	{
		current=*head_ref;
		while(current->next!=NULL && current->next->data < new_node->data)
			current=current->next;
		new_node->next=current->next;
		current->next=new_node;
	}
}
int main()
{

}