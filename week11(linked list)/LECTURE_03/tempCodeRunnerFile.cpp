#include <stdio.h>
 #include<stdlib.h> 
 struct Node{
int data;

struct Node*next ;

};

struct Node*createNode(int data){

struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
 newNode->data=data;
newNode->next=NULL; return newNode;
}

struct Node*mergeTwoList(struct Node*l1,struct Node*l2){
 

if(l1==NULL){

return l2;

}

if(l2 == NULL){

return l1;

}

if(l1->data <= l2->data){

l1->next =mergeTwoList(l1->next,l2); return l1;
}

else{
l2->next=mergeTwoList(l1,l2->next); return l2;
}

}

void printList(struct Node*head){ struct Node* current=head; while(current !=NULL){ printf("%d->",current->data); current=current->next;
}

printf("NULL");

}

int main(){

struct Node*l1=createNode(1); l1->next=createNode(8);
 

l1->next->next=createNode(55);

l1->next->next->next=createNode(7); struct Node*l2=createNode(2);
l2->next=createNode(15);

l2->next->next=createNode(6);

struct Node*mergeList=mergeTwoList(l1,l2);
 printf("mergeList:");
printList(mergeList); return 0;
}

