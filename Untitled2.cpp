#include<stdio.h>
#include<stdlib.h>

typedef struct node_type{ int data;
 struct node_type *next;
}node;
typedef node *list;
void show_list(list);
void delete_end(list);
int main()
{
	list head,tail;
	head=tail=NULL;
	int n;
	char ch;
	printf("Want to enter data?(y/n)\n");
	scanf("%c",&ch);
	if(ch=='y' || ch=='Y')
	{
		printf("Enter data:\n");
		scanf("%d",&n);
		tail=(list)malloc(sizeof(node));
		tail->data=n;
		tail->next=NULL;
		head=tail;
		printf("Enter more data?(y/n)\n");
		fflush(stdin);
		scanf("%c",&ch);
	}
	while(ch=='y'||ch=='Y')
	{
		printf("Enter Data:\n");
		scanf("%d",&n);
		tail->next=(list)malloc(sizeof(node));
		tail->next->data=n;
		tail->next->next=NULL;
		tail=tail->next;
		printf("Enter more data?(y/n)\n");
		fflush(stdin);
		scanf("%c",&ch);
	}
	show_list(head);
	delete_end(head);
	show_list(head);
	return 0;
}
void show_list(list start)
{
	while(start!='\0')
	{
		printf("%d\n",start->data);
		start=start->next;
	}
}
void delete_end(list start)
{
	list loc;
	loc=start->next;
	while(loc->next!=NULL)
	{
		loc=loc->next;
	}
	free(loc->next);
	loc->next=NULL;
	printf("Elements after deletion\n");
	
}
