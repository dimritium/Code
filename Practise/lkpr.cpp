#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node *next;
};
int main()
{
    node *head=(struct node *)malloc(sizeof(struct node));
    node *second=(struct node *)malloc(sizeof(struct node));
    node *third=(struct node *)malloc(sizeof(struct node));

    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;

    while(head!=NULL)
    {
        cout<<head->data;
        head=head->next;
    }
    return 0;
}
