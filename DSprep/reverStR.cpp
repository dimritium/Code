#include<bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define MOD 10000000007

using namespace std;
struct sNode
{
	char data;
	struct sNode *next;
};
void push(struct sNode **top_ref,int new_data);
int pop(struct sNode **top_ref);
bool isEmpty(struct sNode* top);
void print(struct sNode *top);

void insertAtBottom(struct sNode **top_ref,int item)
{
	if(isEmpty(*top_ref))
		push(top_ref,item);
	else
	{
		int temp=pop(top_ref);
		insertAtBottom(top_ref,item);
		push(top_ref,temp);
	}
}
void reverse(struct sNode **top_ref)
{
	if(!isEmpty(*top_ref))
	{
		int temp=pop(top_ref);
		reverse(top_ref);
		insertAtBottom(top_ref,temp);
	}
}
int main()
{
	struct sNode *s=NULL;
	push(&s,4);
	push(&s,3);
	push(&s,2);
	push(&s,1);
	printf("Original Stack\n");
	print(s);
	reverse(&s);
	printf("Reversed Stack\n");
	print(s);
	return 0;
}
bool isEmpty(struct sNode *top)
{
	return (top==NULL)?1:0;
}
void push(struct sNode **top_ref,int new_data)
{
	struct sNode *new_node=(struct sNode*)malloc(sizeof(struct sNode));
	if(new_node==NULL)
	{
		printf("Stack Overflow\n");
		exit(0);
	}
	new_node->data=new_data;
	new_node->next=(*top_ref);
	*top_ref=new_node;
}
int pop(struct sNode **top_ref)
{
	char item;
	struct sNode *start=*top_ref;
	if(*top_ref==NULL)
	{
		printf("Stack Overflow\n");
		exit(0);
	}
	else{
	item=start->data;
	(*top_ref)=top->next;
	free(start);
	return item;
	}
}
void print(struct sNode *top)
{
	while(top!=NULL)
	{
		printf("%d",top->data);
		top=top->next;
	}
}