//inserting
void insertInL(struct ListNode **head,int data,int position){
int k=1;
struct ListNode *p,*q,*newNode;
newNode=(ListNode*)malloc(sizeof(struct ListNode))
if(!newNode)
{
    printf("Memory Error");
    return;
}
newNode->data=data;
p=*head;
if(position==1)
{
    newNode->next=p;
    *head=newNode;
}
else{
    while(p!=NULL)&&(k<position){
        k++;
        q=p;
        p=p->next;
    }
    q->next=newNode;
    newNode->next=p;
}

//deleting

void deletell(struct nodeList **head,int )
