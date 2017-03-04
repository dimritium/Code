#include<bits/stdc++.h>
using namespace std;
struct Dllnode{
 int data;
 struct Dllnode *prev;
 struct Dllnode *next;
};
void Dllinsert(struct Dllnode **head,int data,int position){
    cout<<head<<"\n";
    int k=1;
 struct Dllnode *temp,*newNode;
 newNode=(struct Dllnode *)malloc(sizeof(struct Dllnode));
 if(!newNode)
 {
     printf("Memory Error");
     return;
 }
 newNode->data=data;
 if(position==1)
 {
     newNode->next=*head;
     newNode->prev=NULL;
     if(*head)
        (*head)->prev=newNode;
     *head=newNode;
     return;
 }
 temp=*head;
 while((k<position-1)&&temp->next!=NULL)
 {
     temp=temp->next;
     k++;
 }
 if(k!=position-1)
 {
     printf("Desired position not found");
     return;
 }
 newNode->next=temp->next;
 newNode->prev=temp;
 if(temp->next)
 {
     temp->next->prev=newNode;
 }
 temp->next=newNode;
 return;
}
int main()
{
    struct Dllnode *first,*second,*third,*head;
    first=(struct Dllnode *)malloc(sizeof(struct Dllnode));
    second=(struct Dllnode *)malloc(sizeof(struct Dllnode));
    third=(struct Dllnode *)malloc(sizeof(struct Dllnode));

    head=first;

    first->data=5;
    first->prev=head;
    first->next=second;

    second->data=6;
    second->prev=first;
    second->next=third;;

    third->data=7;
    third->prev=second;
    third->next=NULL;

    while(head)
    {
        printf("%d\n",head->data);
        head=head->next;
    }
    head=first;
    Dllinsert(&head,8,3);

    while(head!=NULL)
    {
        printf("%d\n",head->data);
        head=head->next;
    }
    return 0;
}
