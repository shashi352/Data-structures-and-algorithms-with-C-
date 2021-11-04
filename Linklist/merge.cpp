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

node* merge(node* &head1,node* &head2){
	node* p1=head1;
	node* p2=head2;
	node* dummynode=new node(-1);
	node* p3=dummynode;
	
	while(p1!=NULL && p2!=NULL){
		if(p1->data<p2->data){
			p3->next=p1;
			p1=p1->next;
		
		}else{
			p3->next=p2;
			p2=p2->next;
			
		}
		p3=p3->next;
	}
		
		while(p1!=NULL){
			p3->next=p1;
			p1=p1->next;
			p3=p3->next;
		}
		
		while(p2!=NULL){
			p3->next=p2;
			p2=p2->next;
			p3=p3->next;
			
		}
        return dummynode->next;
}

node* MergeRecursively(node* &head1,node* &head2){
	if(head1==NULL){
		return head2;
	}
	if(head2==NULL){
		return head1;
	}
	node* result;
	
	if(head1->data<head2->data){
		result=head1;
		result->next=MergeRecursively(head1->next,head2);
			
		}
		else{
			result=head2;
			result->next=MergeRecursively(head1,head2->next);
		}
		return result;
	}

int main(){
	
	node* head1=NULL;
	node* head2=NULL;
	int arr1[]={1,2,3,4,5,6};
	int arr2[]={9,10};

	for(int i=0;i<6;i++){
		insertattail(head1,arr1[i]);
	}
	for(int i=0;i<2;i++){
		insertattail(head2,arr2[i]);
	}
	
	display(head1);
	display(head2);
	node* newhead=merge(head1,head2);
	display(newhead);
    node* newhead1=MergeRecursively(head1,head2);
	display(newhead1);
     
	
	return 0;
}
