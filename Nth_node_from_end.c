#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head=NULL;

void insert_end(int val){
    struct Node* newnode=malloc(sizeof(struct Node));
    newnode->data=val; newnode->next=NULL;
    if(!head){head=newnode;return;}
    struct Node* temp=head;
    while(temp->next)temp=temp->next;
    temp->next=newnode;
}

int nth_from_end(int n){
    struct Node *fast=head,*slow=head;
    for(int i=0;i<n;i++){
        if(!fast)return -1;
        fast=fast->next;
    }
    while(fast){fast=fast->next; slow=slow->next;}
    return slow->data;
}

int main(){
    insert_end(10); insert_end(20); insert_end(30); insert_end(40);
    printf("%d\n",nth_from_end(2));
    printf("%d\n",nth_from_end(5));
    return 0;
}
