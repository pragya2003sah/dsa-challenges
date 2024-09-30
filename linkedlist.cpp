//travel the linked list
#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
      int data;
      Node* next;
    //constructor

    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
//array to linked list
Node* arraytoll(vector<int> arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void print(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* deletefront(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* temp=head;
    head=head->next;
    free(temp);
    return head;
}
Node* deleteback(Node* head){
 if(head==NULL | head->next==NULL){
    return NULL;
 }
 Node* temp=head;
 while(temp){
    if(temp->next->next==NULL){
        Node* last=temp->next;
        temp->next=nullptr;
        free(last);
    }
    temp=temp->next;
 }
 return head;
}

Node* deletek(Node * head,int k){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        if(k==1){
            return NULL;
        }
    }
    Node* temp=head;
    if(k==1){
        head=head->next;
        free(temp);
        return head;
    }
    int count=0;
    while(temp){
              count++;
        if(count==(k-1)){
        Node* remove=temp->next;
        temp->next=temp->next->next;
        free(remove);
        }
  
        temp=temp->next;
    }
    return head;

}
Node* insertfront(Node* head,int el){
    Node* temp=new Node(el);
    if(head==NULL){
        return temp;
    }
    temp->next=head;
    return temp;
}

Node* insertlast(Node* head,int el){
    Node* insert=new Node(el);
    if(head==NULL){
        return insert;
    }
    Node* temp=head;
    while(temp){
        if(temp->next==NULL){
            temp->next=insert;
            break;
        }
        temp=temp->next;
    }
    return head;
    
}
Node* insertk(Node* head, int el,int k){
    Node* insert=new Node(el);
    if(head==NULL){
       if(k==1){
          return insert;
       }
    }
    int count=0;
    if(k==1){
        insert->next=head;
        return insert;
    }
    Node* temp=head;
    while(head){
        count++;
        if(count==(k-1)){
        insert->next=temp->next;
        temp->next=insert;
        break;
       }
       temp=temp->next;
    }
    return head;
}


int main(){
    vector<int>arr={5,7,1,9,7};
    Node* head=arraytoll(arr);
    print(insertk(head,3,6));
}
