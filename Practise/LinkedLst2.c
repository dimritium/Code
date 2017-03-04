//linked list to insert elements in begining
#include<stdio.h>
typedef struct node_type{
	int data;
	struct node_type *next;
}node;
typedef node *list;
int main()
{
	list head,temp;
	char ch;
	int n;
	head=NULL;
	printf("Want to Enter Data?(y/n)\n");

	scanf("%c",&ch);
	while(ch=='y'||ch=='Y')
	{
		printf("Enter Data:\n");
		scanf("%d",&n);
		temp=(list)malloc(sizeof(node));
		temp->data=n;
		temp->next=head;
		head=temp;
		printf("Enter more data?(y/n)\n");
		fflush(stdin);
		scanf("%c",&ch);
	}
	
	while(temp!=NULL)
	{
	printf("%d\n",temp->data);
	temp=temp->next;
    }
	return 0;
}
