void rotateLL(struct node **head_ref,int k)
{
	struct node *start=*head_ref,*current=*head_ref;
	int c=1;
	while(start!=NULL && c!=k)
	{
		start=start->next;
		c++;
	}
	if(start==NULL)
		cout<<"Cant";
	else if(c==k)
	{
		while(current!-'=NULL)
			current=current->next;
		current->next=*head_ref;
		*head_ref=start->next;
		start->next=NULL;
	}
}