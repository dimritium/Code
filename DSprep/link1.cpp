#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
struct node{
	int data;
	struct node *next;
};
int main()
{
	struct node *head=NULL;
	struct node *second=NULL;
	struct node *third=NULL;
	head=new node();
	second=(struct node *)malloc(sizeof(struct node));
	third=(struct node *)malloc(sizeof(struct node));
	head->data=1;
	head->next=second;
	second->data=2;
	second->next=third;
	third->data=3;
	third->next=NULL;
	struct node *start=head;
	while(start!=NULL)
	{
		printf("%d",start->data);
		start=start->next;
	}
	return 0;
}