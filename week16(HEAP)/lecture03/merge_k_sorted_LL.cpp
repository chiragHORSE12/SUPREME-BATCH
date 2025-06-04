#include<iostream>
#include<vector>
#include<queue>
using namespace std;
//leat code solution 
class ListNode{
    public:
    int val;
    ListNode* next;

    ListNode(){
        this->val=0;
        this->next=NULL;
    }
    ListNode(int data){
        this->val=data;
        this->next=NULL;
    }
};
 class compare{
    public:

    bool operator()(ListNode* a,ListNode* b){
        return a->val > b->val;
    }
};
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,compare>minheap;
        int k=lists.size();
        if(k == 0){
            return NULL;
        }
// phele element linked list ko insert kardo
        for(int i=0;i<k;i++){
            if(lists[i] != NULL){
                minheap.push(lists[i]);

            }
        }
        ListNode* head=NULL;
        ListNode* tail=NULL;

        while(!minheap.empty()){
            ListNode* temp=minheap.top();
            minheap.pop();
             //temp may or may not be first element
             if(head == NULL){
                //temp is first element
                head =temp;
                tail=temp;

                if(tail->next != NULL){
                    minheap.push(tail->next);
                }
             }
             else{
                // temp is not first element  
                tail->next=temp;
                tail=temp;
                if(tail->next != NULL){
                    minheap.push(tail->next);
                }

             }
        }
        return head;
}
