#include<bits/stdc++.h>
using namespace


class node{
	public:
	int data;
	node* next;
	
	node(int val;){
		data =val;
		next=NULL;
	}
};

class queue{
	
	public:
	node* front
	node* back
	queue(){
		front=NULL;
		back=NULL;
	}
	void push (int x){
		node* n=new node(x);
		back ->next=n;
	    back=n
	    
	    if(front  ==NULL){
	    	back=n;
			front=n
			return
		}
		back->next=n;
		back=n;
	}
	void pop(){
		if (front==NULL)
		cout<<"quwuw underflow"
	}
	node* todelete=front
	front=front->next
	
	delete to delete
	
	
void peek()	{
	if(front == back ){
	cout<<"queue underflow"<<endl;
	return;	}
   node* todelete=front;
   front= front->next
   delete todelete
	
}
else {return false
}

bool isempty(){
	if(front= NULL){
	cout<<"no elememnt in queue"; 
	true;
	}
}
}; 

int main(){
	qeueue a;
	a.push(1);
	a.push(2);
	a.push(3);
	a.push(4);
	
	a.pop()
	a.pop()
	a.pop()
	a.pop()
	a.isempty()
}
