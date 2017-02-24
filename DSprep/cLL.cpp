//circular linked list
//traversal
void push(struct node **head_ref,int data)
{
	struct node *ptr1=(struct node *)malloc(sizeof(struct node));
	struct node *temp=*head_ref;
	ptr1->data=data;
	ptr1->next=*head_ref;
	if(*head_ref!=NULL)
	{
		while(temp->next!=*head_ref)
			temp=temp->next;
		temp->next=ptr1;
	}
	else
		ptr1->next=ptr1;
	*head_ref=ptr1;
}
void printlist(struct node *first)
{
	struct node *temp=first;
	if(first!=NULL)
	{
		do
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}while(temp!=first);
	}
}