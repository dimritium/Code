#include <bits/stdc++.h>
using namespace  std;

struct node{
    int data;
    struct node* next;
};

node* SortedMerge(node* a, node* b);
void FrontBackSplit(node* source, node** frontRef, node** backRef);

void MergeSort(node** headRef)
{
    node* head = *headRef;
    node* a;
    node *b;
    if((head == NULL)||(head->next == NULL))
        return;
    FrontBackSplit(head, &a, &b);
    MergeSort(&a);
    MergeSort(&b);
    *headRef = SortedMerge(a, b);
}

node* SortedMerge(node* a, node* b)
{
    node* result = NULL;
    if(a == NULL)
    return (b);
    else if(b==NULL)
    return a;
    if(a->data <= b->data){
        result = a;
        result->next = SortedMerge(a->next, b);
    }
    else{
        result = b;
        result->next=SortedMerge(a, b->next);
    }
    return result;
}

void FrontBackSplit(node* source, node** frontRef, node** backRef)
{
    node* fast;
    node* slow;
    if(source == NULL || source->next == NULL){
        *frontRef = source;
        *backRef = NULL;
    }
    else{
        slow= source;
        fast = source->next;
        while (fast!=NULL)
        {
           fast=fast->next; 
           if(fast!=NULL){
               slow = slow->next;c
               fast=fast->next;
           }
        }
        *frontRef = source;
        *backRef = slow->next;
        slow->next = NULL;
    }
}

void printList(node* node){
    while (node!=NULL)
    {
        cout<<node->data<<" ";
        node = node->next;
    }
}

void push(node** head_ref, int new_data)
{
    node* new_node = new node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;

}

int main()
{
    node* res = NULL;
    node* a = NULL;
    push(&a,15);
    push(&a,20);
    push(&a,1);
    push(&a,12);
    push(&a,11);
    push(&a,9);
    MergeSort(&a);
    cout<<"Sorted list:"<<endl;
    printList(a);
    return 0;
    
}