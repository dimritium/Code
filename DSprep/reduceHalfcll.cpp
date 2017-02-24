void splitl(struct node *head,struct node **head1_ref,struct node **head2_ref)
{
	struct node *slow_ptr=head;
	struct node *fas_ptr=head;
	if(head==NULL)
		return;
	while(fas_ptr->next!=head && fas_ptr->next->next!=head)
	{
		fas_ptr=fas_ptr->next->next;
		slow_ptr=slow_ptr->next;
	}
	if(fas_ptr->next->next==head)
		fas_ptr=fas_ptr->next;
	
	*head1_ref=head;
	
	if(head->next!=head)
		*head2_ref=slow_ptr->next;
	fas_ptr->next=slow_ptr->next;
	slow_ptr->next=head;
}