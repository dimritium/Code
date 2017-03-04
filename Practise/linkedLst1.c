//linked lst to insert elements at end
#include<stdio.h>
typedef struct node_type{
	int data;
	struct node_type *next;
}node;
typedef node *list;
void show_list(list);
void list_rev(list,list);
int main()
{
	list head, tail;
	char ch;
	int n;
	head=tail=NULL;
	printf("Enter Data?(y/n)");
	scanf("%c",&ch);
	if(ch=='y'||ch=='Y')
	{
		printf("Give Data\n");
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
		printf("Enter more data?(y/n)");
		fflush(stdin);
		scanf("%c",&ch);
	}
	show_list(head);
	getchar();
	return 0;
}
void show_list(list start)
{
	while(start!=NULL)
	{
		printf("\n%d",start->data);
		start=start->next;
	}
	printf("\n");
}
void list_rev(list start1,list end)
{
	start1=end;
	while(end!=NULL)
	{
		end->next->next=--end;
	}
	show_list(start1);
}

