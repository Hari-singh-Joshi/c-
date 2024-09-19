#include <iostream>
#include<climits>
#include<vector>
#include<set>
#include<unordered_map>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
class node{
    public:
    int data;
    node* next;
node(int val){
    data=val;
    next=NULL;
}
};
void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
void insertAtTail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    } 
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    
    }

void deletion(node* &head,int val){
    node* temp=head;
    while(temp->next->data==val){
        temp=temp->next;

    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
void deleteAtHead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}



bool search(node* head, int target){
    node*temp=head;
    while(temp!=NULL){
        if(temp->data==target){
            return true;
        }
    }
    return false;
}


void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
node* reverseRecursive(node* &head){
    if(head==NULL || head->next==NULL){
return head;
    }
    node* newhead=reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
// node* reverseIterative(node* &head){
//     node* prevptr=NULL;
//     node* currptr=head;
//     node* nextptr;

//     while(currptr!=NULL){
//         nextptr=currptr->next;
//         currptr->next=prevptr;
//         prevptr=currptr;
//         currptr=nextptr;
//     }
//     return prevptr;
// }
node* reversek(node* &head,int k){
    int count=0;
    node* prevptr=NULL;
     node* currptr=head;
 node* nextptr;
    while(currptr!=NULL& count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next=reversek(nextptr,k);

    }
    return prevptr;
}

bool detectcycle(node* &head){
    node *slow=head;
    node* fast=head;
    while(fast!=NULL & fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            return true;
        }
        return false;
    }
}
void removecycle(node* &head){
    if(detectcycle(head)){
    node* slow=head;
    node* fast=head;
    do{
        slow=slow->next;
        fast=fast->next;
    }while(slow!=fast);
    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}
}

int main(){
    node* head=NULL;
      cout<<"1.insertion at end"<<endl<<"2.insertion at head"<<endl<<"3.deletion "<<endl<<"4.deletion at head"<<endl<<"5.search"<<endl<<"6.display"<<"7.reverse"<<"8.reverse k nodes"<<"10.exit"<<endl;
while(1){
  int n;
  cout<<"enter your chooice:";
  cin>>n;
  switch(n){
    case 1:
    int val;
    cin>>val;
    insertAtTail(head,val);
    break;
    case 2:
    
    cin>>val;
    insertAtHead(head,val);
    break;
    case 3:
 
    cin>>val;
    deletion(head,val);
    break;
    case 4:
    deleteAtHead(head);
    break;
    case 5:
    int target;
    cin>>target;
    search(head,target);
    break;
    case 6:
    display(head);
    break;
    case 7:
                head = reverseRecursive(head);
                cout << "Reversed list: ";
                display(head);
                break;
                case 8:
                int k;
                cin>>k;
                head=reversek(head,k);
                display(head);
                break;

            case 10:
                exit(0);
            default:
                cout << "You entered the wrong choice" << endl;
  }

}
    
    return 0;
}