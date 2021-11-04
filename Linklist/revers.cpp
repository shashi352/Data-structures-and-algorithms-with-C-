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

void display(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}cout<<"NULL"<<endl;
}
/*
node* reverse(node* &head){
	node* prevptr=NULL;
	node* currptr=head;
	node* nextptr;
	while(currptr!=NULL){
	nextptr=currptr->next;
	currptr->next=prevptr;
	
	prevptr=currptr;
	currptr=nextptr;
}
return prevptr;
}
*/

node* reversrecursive(node* &head){
	
	if(head==NULL || head->next==NULL){ //base case is imp
		return head;
	}
	
	node* newhead= reversrecursive(head->next);
	
	head->next->next=head;
	head->next=NULL;
	return newhead;
}


int main(){
	node* head=NULL;
	insertattail(head,1);
	insertattail(head,2);
	insertattail(head,3);
	display(head);
	
/*	node* newhead= reverse(head);
	display(newhead);
	*/
	node* newhead=reversrecursive(head); // this is a iterative method
	display(newhead);
	
	
	
}
