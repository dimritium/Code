#include<bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define MOD 10000000007

using namespace std;
struct Queue
{
	int front,rear,size;
	unsigned capacity;
	int *array;
};
struct Queue* createQueue(unsigned capacity)
{
	struct Queue *queue=(struct Queue *)malloc(sizeof(struct Queue));
	queue->capacity=capacity;
	queue->front=queue->size=0;
	queue->rear=capacity-1;
	queue->array=(int *)malloc(queue->capacity*sizeof(int));
	return queue;
}
int isFull(struct Queue *queue)
{
	return (queue->size==queue->capacity);
}
int isEmpty(struct Queue *queue)
{
	return queue->size==0;
}
void enqueue(struct Queue *queue,int item)
{
	if(isFull(queue))
		return;
	queue->rear=(queue->rear +1)%queue->capacity;
	queue->array[queue->rear]=item;
	queue->size=queue->size+1;
}
int dequeue(struct Queue *queue)
{
	if(isEmpty(queue))
		return INT_MIN;
	int item=queue->array[queue->front];
	queue->front=(queue->front + 1)%queue->capacity;
	queue->size=queue->size -1;
	return item;
}
int front(struct Queue *queue)
{
	if(isEmpty(queue))
		return INT_MIN;
	return queue->array[queue->front];
}
int rear(struct Queue *queue)
{
	if(isEmpty(queue))
		return INT_MIN;
	return queue->array[queue->rear];
}
void printl(struct Queue *queue)
{
	int i;
	for(i=(queue->front);i<=(queue->rear);i++)
		cout<<queue->array[i]<<" ";
}
int main()
{
 struct Queue *queue=createQueue(1000);
 enqueue(queue,10);
 enqueue(queue,20);
 enqueue(queue,30);
 printf("%d\n",dequeue(queue));
 printl(queue);
}