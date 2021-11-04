#include<bits/stdc++.h>
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

void insertattail(node* &head,int val){
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
void makecycle(node* &head, int pos){ // give a cycle what we give here possition 
	node* temp=head;
	node* startnode;
	
	int count=1;
	while(temp->next!=NULL){ // this temp go to last node
		if(count==pos){     // the counter we are treverse or going when its equal to possition
			startnode=temp;
		}
		temp=temp->next;
		count++;
	}
	temp->next=startnode;
}

void display(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}cout<<"NULL"<<endl;
}

bool detectcycle(node* &head){
	
	node* slow = head;
	node* fast = head;

	while(fast!=NULL && fast!=NULL){
	slow = slow->next;
	fast = fast->next->next;	
	
	if(fast==slow){
		return true;
	}
	
	}
	return false;
}

// imp for interview questions
void removecycle(node* &head){ // here we are sending head by reference
	node* slow=head;
	node* fast=head;
	
	do{
		slow=slow->next;
		fast=fast->next->next;
	}while(slow!=fast);
	
	fast=head;
	
	while(slow->next!=fast->next){
		
	slow=slow->next;
	fast=fast->next;
	}
		slow->next=NULL;
}

int main(){
	node* head=NULL;
	insertattail(head,1);
	insertattail(head,2);
	insertattail(head,3);
	insertattail(head,4);
	insertattail(head,5);
	insertattail(head,6);
	makecycle(head,3);// thats create the cycle on the linkedlist
	
	//display(head);
	cout<<detectcycle(head)<<endl;
	removecycle(head);// that delete the cycle of linkedlist 
	
	cout<<detectcycle(head)<<endl;
	display(head);
	
}
