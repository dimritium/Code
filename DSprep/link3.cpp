//Queue linked list representation
#include<bits/stdc++.h>
using namespace std;
struct QNode{
	int key;
	struct QNode *next; 
};
struct Queue{
	struct QNode *front,*rear;
};
//to create new linked list node
struct QNode *newNode(int k)
{
	struct QNode *temp=new QNode;
	temp->key=k;
	temp->next=NULL;
	return temp;
}
struct Queue *createQueue()
{
	struct Queue *q=new Queue;
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
struct node *deQueue(struct Queue *q)
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

}