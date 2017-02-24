#include<iostream>
using namespace std;
struct node{
int data;
struct node *next;
};
/*Given a refe to the head of a list and an int inserts a new node on the front of the list*/
void push(struct node** head_ref,int new_data)
{
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}
void insertAfter(struct node* prev_node,int new_data)
{
    if(prev_node==NULL)
    {
        printf("the previous node cannot be NULL");
        return;
    }
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;
}
void append(struct node** head_ref,int new_data)
{
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    struct node *last=*head_ref;
    new_node->data=new_data;
    new_node->next=NULL;
    if(*head_ref==NULL)
    {
        *head_ref=new_node;
        return;
    }
    while(last->next!=NULL)
        last=last->next;
    last->next=new_node;
    return;
}
int main()
{

}
