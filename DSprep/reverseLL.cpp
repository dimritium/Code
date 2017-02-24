void reverseLL(struct node **head_ref)
{
	struct node *prev=NULL;
	struct node *current=*head_ref;
	struct node *next;
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	*head_ref=prev;
}