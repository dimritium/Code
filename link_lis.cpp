#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long 
#define MOD 1000000007
#define pb push_back

using namespace std;

struct lnode{
    int value;
    lnode *next;
};

int main()
{
    int tc;
    ll n, k;
    cin>>tc;
    while(tc--)
    {
        ll x;
        cin>>n>>k;
        lnode *friend_list = new lnode;
        cout<<"rf va"<<friend_list->value<<endl;
        lnode *head_fr = friend_list;
        lnode *prev;
        for(ll i = 0; i<n; i++)
        {
            cin>>x;
            friend_list->value = x;
            prev = friend_list;
            friend_list->next = new lnode;
            friend_list = friend_list->next;
        }
        prev->next = NULL;
        lnode *new_friend_list = new lnode;
        lnode *head = new_friend_list;
        lnode *prev_new = head;
        ll count = 0;
        for(ll i = 0; i<n; i++)
        {
            if(head_fr->next!= NULL && (head_fr->value < head_fr->next->value) && count < k)
            {
                new_friend_list->value = head_fr->next->value;
                prev_new = new_friend_list;
                new_friend_list->next = new lnode;
                new_friend_list = new_friend_list->next;
                count++;
                head_fr = head_fr->next;
            }
            else if(head_fr->next != NULL)
            {
                new_friend_list->value = head_fr->value;
                new_friend_list->next = new lnode;
                new_friend_list = new_friend_list->next;
                prev_new = new_friend_list;
                head_fr = head_fr->next;
            }
            else if(head_fr->next == NULL)
            {
                new_friend_list->value = head_fr->value;
                new_friend_list->next = NULL;
            }
        }
        while(head!=NULL)
        {
            cout<<head->value<<" ";
            head=head->next;
        }
    }  
}