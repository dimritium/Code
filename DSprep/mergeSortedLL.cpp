//merge two sorted ll
struct node *SortedMerge(struct node *a,struct node *b)
{
	struct node *head=NULL,*tail=head;

	if(a==NULL)
		return b;
	else if(b==NULL)
		return a;
	if(a->data < b->data)
	{
		head=a;
		a=a->next;
	}
	else if(b->data <= a->data)
	{
		head=b;
		b=b->next;
	}

	tail=head;
	while(1)
	{
		if(a==NULL){
			tail->next=b;
			break;
		}
		else if(b==NULL)
		{
			tail->next=a;
			break;
		}
		if(a->data < b->data)
		{
			tail->next=a;
			a=a->next;
		}
		else
		{
			tail->next=b;
			b=b-next;
		}
		tail=tail->next;
	}
	return (head);
}