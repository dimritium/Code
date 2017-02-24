//swap nodes of the linked list given the two keys
void swapNodes(struct node **head_ref,int x,int y)
{
	if(x==y)
		return;
	struct node *prevX=NULL,*currX=*head_ref;
	while(currX && currX->data!=x)
	{
		prevX=currX;
		currX=currX->next;
	}

	struct node *prevY=NULL,*currY=*head_ref;
	while(currY && currX->data!=x)
	{
		prevY=currX;
		currY=currY->next;
	}
	if(currX==NULL || currY==NULL)
		return;
	if(prevX!=NULL)
		prevX->next=currY;
	else
		*head_ref=currY;

	if(prevY!=NULL)
		prevY->next=currX;
	else
		*head_ref=currX;

	struct node *temp=currY->next;
	currY->next=currX->next;
	currX->next=temp;
}