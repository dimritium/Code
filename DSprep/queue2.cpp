//linked representation
#include<bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define MOD 10000000007

using namespace std;
struct QNode
{
	int key;
	struct QNode *next;
};
struct Queue
{
	struct QNode *front,*rear;
};
struct QNode *newNode(int k)
{
	struct QNode *temp=(struct QNode *)malloc(sizeof(struct QNode));
	temp->key=k;
	temp->next=NULL;
	return temp;
}
struct Queue *createQueue()
{
	struct Queue *q=(struct Queue *)malloc(sizeof(struct Queue));
	q->front=q->rear=NULL;
	return q;
};
void enQueue(struct Queue *q,int k)
{
	struct QNode *temp=newNode(k);
	if(q->rear==NULL)
	{
		q->front=q->rear=temp;
		return;
	}
	q->rear->next=temp;
	q->rear=temp;
}
struct QNode *deQueue(struct Queue *q)
{
	if(q->front==NULL)
		return NULL;
	struct QNode *temp=q->front;
	q->front=q->front->next;
	if(q->front==NULL)
		q->rear=NULL;
	return temp;
}
int main()
{
	struct Queue *q=createQueue();
	enQueue(q,10);
	enQueue(q,20);
	enQueue(q,30);
	printf("%d\n",deQueue(q)->key);
}