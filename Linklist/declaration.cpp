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
void insertathead(node* &head,int val){
	node* n=new node(val);
		n->next=head;
		head=n;

}

void insertattail(node* &head, int val){ // if we want to change so we could include this by reference
	
	node* n= new node(val); // here on n we putting value of val
	
	if(head==NULL){
		head=n;
		return;
	}
	
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	} //here temp is a null
	temp->next=n;
}

void display(node* head){
	
	
	
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}

bool search(node* head,int key){
	node* temp=head;
	
	while(temp!=NULL){
		if(temp->data==key){
			return true;
		}
		temp=temp->next;
	}
	return false;
}
void deleteathead(node* &head){
	node* todelete=head;
	head=head->next;
	delete todelete;
	
}

void deletion(node* &head,int val){
	
	if(head==NULL){// if head is null
		return;
	}
	if(head->next==NULL){// if first node and last node is same
		deleteathead(head);
		return;
	}
	
	node* temp=head;
	while(temp->next->data!=val){
		temp=temp->next;
	}
	node* todelete=temp->next;
	temp->next=temp->next->next;
	delete todelete;
}

int main(){
	
	node* head=NULL;
	insertattail(head,1);
	insertattail(head,2);
	insertattail(head,3);
	display(head);
	insertathead(head,4);
	display(head);
	cout<<search(head,4)<<endl;
	deletion(head,3);
	display(head);
	deleteathead(head);
	display(head);
	deletion(head,2);
	display(head);
	deletion(head,1);// if node is first node and last node
	display(head);
	
	return 0;
}
