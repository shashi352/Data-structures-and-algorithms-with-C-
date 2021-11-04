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
void insertathead(node* head,int val){
	node* n=new node(val);

	n->next=head;
	head=n;
}

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

void display(node* &head){
	node* temp=head;

	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}cout<<"NULL"<<endl;
}

int lenght(node* &head){
	int l=0;
	node* temp=head;

	while(temp!=NULL){
		l++;
		temp->next;
	}
	return l;
}

node* kappend(node* &head,int k){
	node* tail=head;
	node* newtail;
	node* newhead;

    int l=lenght(head);
    k=k%l;
    int count=1;

	while(tail->next!=NULL){
		if(count==l-k){
			newtail=tail;
		}
		if(count==l-k+1){
			newhead=tail;
		}
		tail=tail->next;
		count++;
	}
	newtail->next=NULL;
	tail->next=head;

	return newhead;// so i have found our new head
}

int main(){

	node* head;
	int arr[]={1,2,3,4,5,6};

	for(int i=0;i<6;i++){
		insertattail(head,arr[i]);
	}
	display(head);
    cout<<kappend(head,3);

	node* newhead=kappend(head,3);
	display(newhead);

	return 0;
}

