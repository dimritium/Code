//doubly linked list
struct node{
	int data;
	struct node *next;
	struct node *prev;
};
void push(struct node **head_ref,int new_data)
{
	struct node *new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=(*head_ref);
	new_node->prev=NULL;
	if((*head_ref)!=NULL)
		(*head_ref)->prev=new_node;
	(*head_ref)=new_node;
}
void insertAfter(struct node *prev_node,int new_data)
{
	if(prev_node=NULL)
	{
		printf("the prev node cannot be NULL")
		return;
	}
	struct node *new_node=(struct node *)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=prev_node->next;
	prev_node->next=new_node;
	new_node->prev=prev_node;
	if(new_node->next!=NULL)
		new_node->next->prev=new_node;
}
void append(struct node** head_ref,int new_data)
{
	struct node *new_node=(struct node*)malloc(sizeof(struct node));
	struct node *last=*head_ref;
	new_node->data=new_data;
	new_node->next=NULL;
	if(*head_ref==NULL)
	{
		new_node->prev=NULL;
		*head_ref=new_node;
		return;
	}
	while(last->next!=NULL)
	{
		last=last->next;
	}
	last->next=new_node;
	new_node->prev=last;
	return;
}
void printList(struct node *head_ref)
{
	struct node *last;
	printf("\nTraversal in forward direction\n");
	while(head_ref!=NULL)
	{
		printf("%d",head_ref->data);
		last=head_ref;
		head_ref=head_ref->next;
	}
	printf("\nTraversal in reverse direction\n");
	while(last!=NULL)
	{
		printf("%d",last->data);
		last=last->prev;
	}
}