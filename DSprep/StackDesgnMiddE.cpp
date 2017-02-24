#include<bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define MOD 10000000007

using namespace std;

struct DllN{
	struct DllN *prev;
	int data;
	struct DllN *next;
};
struct myStack
{
	struct DllN *head;
	struct DllN *mid;
	int count;
};
struct myStack *createMyStack()
{
	struct myStack *ms=(struct myStack*)malloc(sizeof(struct myStack));
	ms->count=0;
	return ms;
};
void push(struct myStack *ms,int new_data)
{
	struct DllN *new_Dll=(struct DllN*)malloc(sizeof(struct DllN));
	new_Dll->data=new_data;
	new_Dll->prev=NULL;
	new_Dll->next=ms->head;
	ms->count+=1;
	if(ms->count==1)
	{
		ms->mid=new_Dll;
	}
	else
	{
		ms->head->prev=new_Dll;
		if(ms->count&1)
			ms->mid=ms->mid->prev;
	}
	ms->head=new_Dll;
}
int pop(struct myStack *ms)
{
	if(ms->count==0)
	{
		cout<<"Stack is empty\n";
		return -1;
	}
	struct DllN *head=ms->head;
	int item=head->data;
	ms->head=head->next;
	if(ms->head!=NULL)
		ms->head->prev=NULL;
	ms->count-=1;
	if(!((ms->count)&1))
		ms->mid=ms->mid->next;
	free(head);
	return item;
}		
int findM(struct myStack *ms)
{
	if(ms->count==0)
	{
		cout<<"Stack is empty\n";
		return -1;
	}
	return ms->mid->data;
}
int main()
{
	struct myStack *ms = createMyStack();
    push(ms, 11);
    push(ms, 22);
    push(ms, 33);
    push(ms, 44);
    push(ms, 55);
    push(ms, 66);
    push(ms, 77);
 
    printf("Item popped is %d\n", pop(ms));
    printf("Item popped is %d\n", pop(ms));
    printf("Middle Element is %d\n", findM(ms));
    pl(ms);
    return 0;	
}