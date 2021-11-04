#include<bits/stdc++.h>
using namespace std;

class node{
	public:
		int data;
		node* next;
		node* prev;
		
		node(int val){
			data=val;
			next=NULL;
			prev=NULL;
		}
};

void insertathead(node* &head,int val){
	node* n=new node(val);
	n->next=head;
	if(head!=NULL){	
	head->prev=n;
    }
	head=n;
	
}

void insertattail(node* &head,int val){
	
	if(head==NULL){
		insertathead(head,val);
		return;
	}
	
	node* n= new node(val);
	node* temp=head;
	
	while(temp->next!=NULL){
		temp=temp->next;
	}
	
	temp->next=n;
	n->prev=temp;
	n->next=NULL;
	
}

void display(node* &head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}
void deletionhead(node* head){// only here we pass head because we know which position i have to delete
	node* todelete=head;
	head=head->next;
	head->prev=NULL;
	delete todelete;
}

void deletion(node* head,int pos){
	
	if(pos==1){
		deletionhead(head);
		return;
	}
	
	node* temp=head;
	int count=1;
	
	while(temp!=NULL && count!=pos){
		temp=temp->next;
		count++;
	}
	temp->prev->next=temp->next;
	
	if(temp->next!=NULL){
		temp->next->prev=temp->prev;
	}
	
}

int main(){
	node* head;
	insertattail(head,1); 
	insertattail(head,2);
	insertattail(head,3);
	insertattail(head,4);
	insertattail(head,5);
	insertattail(head,6);
	display(head);//OP :-1->2->3->4->5->6->NULL

	insertathead(head,7);
	display(head);//OP :-7->1->2->3->4->5->6->NULL
	
	deletion(head,4);
	display(head);// after deletion this is the answer
	//op :- 7->1->2->4->5->6->NULL
	
	return 0;
}
