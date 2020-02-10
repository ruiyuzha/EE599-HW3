#include "solution.h"
#include <iostream>
using namespace std;

//O(1)
SinglyLinkedList::SinglyLinkedList(){
    head_ = nullptr;
}

//O(n)
SinglyLinkedList::SinglyLinkedList(const std::vector<int> &inputs, int i){
    if (i==-1||i>inputs.size()){
        head_ = nullptr;
    }
    head_ = new ListNode(inputs[0]);
    for(int j = 1; j < inputs.size(); j++){
      SinglyLinkedList::push_back(inputs[j]);
    }
}

//O(1)
bool SinglyLinkedList::empty(){
    return (head_ == nullptr);
}

//O(n)
int SinglyLinkedList::size(){
    ListNode *temp;
    temp = head_;
    int k=0;
    while(temp!=NULL)
    {
        k++;
        temp=temp->next;
    }
    return k;
}

//O(1)
// inserts at the back
void SinglyLinkedList::push_back(int i){
    ListNode *pnew = new ListNode(i);
    ListNode *temp = SinglyLinkedList::GetBackPointer();
    temp -> next = pnew;
} 

//O(1)
// inserts at the front
void SinglyLinkedList::push_front(int i){
    ListNode* pnew=new ListNode(i);
    pnew -> next=head_;
    head_=pnew;
}

//O(1)
// inserts value i after p
void SinglyLinkedList::insert_after(ListNode* p, int i){
    ListNode* pnew=new ListNode(i);
    pnew->next=p->next;
    p->next=pnew;
}

//O(1)
// Erases node p
void SinglyLinkedList::erase(ListNode* p){
    ListNode *temp = p->next;
    p->val = temp->val;
    p->next = temp->next;
}

//O(1)
// removes the first item
void SinglyLinkedList::pop_front(){
    head_ = head_->next;
} 

//O(n)
// removes the last item
void SinglyLinkedList::pop_back(){
    ListNode *temp=head_;
    while(temp->next->next != nullptr){
    temp = temp->next;
    }
    temp->next = nullptr;
} 
  
//O(1)
// returns the value of last item
int SinglyLinkedList::back(){
    ListNode *ptemp = SinglyLinkedList::GetBackPointer();
    return ptemp -> val;
} 

//O(1)
// returns the value of first item
int SinglyLinkedList::front(){
    return head_->val;
}

//O(n)
// Returns pointer to last item
ListNode *SinglyLinkedList::GetBackPointer(){
    ListNode *temp;
    temp = head_;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    return temp;
}

//O(n)
// Returns pointer to i(th) element
ListNode *SinglyLinkedList::GetIthPointer(int i){
    ListNode *temp;
    temp = head_;
    for (int j=0; j<i; j++){
        temp=temp->next;
    }
    return temp;
}

//O(n)
// Prints the list: ex. Empty list: {}. List with items: {1, 2, 3}
void SinglyLinkedList::print(){
    ListNode *temp;
    temp = head_;
    cout<<"{";
    while(temp!=nullptr){
        cout<<temp->val;
        temp = temp->next;
        if (temp!=nullptr){
            cout<<",";
        }
    }
    cout<<"}"<<endl;
}
