void chkLoopLL(struct node *head_ref)
{
	struct node *slow=head_ref,*fast=head_ref;
	while(slow && fast && fast->next)
	{
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
		{
			removeLoop(slow,head_ref)
			return 1;
		}
	}
	return 0;
}
void removeLoop(struct node *loop_node,struct node *head)
{
	struct node *ptr1;
	struct node *ptr2;
	ptr1=head;
		ptr2=loop_node;
		while(ptr1!=ptr2)
		{
			prev=ptr2;
			ptr1=ptr1->next;
			ptr2=ptr2->next;
		}
		prev->next=NULL;
}