//insertion in sorted cll
void insCLL(struct node **head,struct node *new_node)
{
	struct node *current=*head;
	if(current==NULL)
	{
		new_node->next=new_node;
		*head=new_node;
	}
	else if(current->data >= new_node->data)
	{
		new_node->next=current;
		*head=new_node;
		while(current->next!=*head)
			current=current->next;
		current->next=*head;
	}
	else
	{
		while(current->next!=*head && current->next->data < new_node->data)
			current=current->next;
		new_node->next=current->next;
		current->next=new_node;
	}
}