#include<bits/stdc++.h>
using namespace

class Queue{
	int arr;
    int	front;
    int	back;
		public :
		queue(){//arrary give valuue dynamicli
			arr= new int[n];
				front= -1;
            	back=-1;
		}
void push(int s){ // queue;

	if(back=n-1){
		cout<<"queue is over lode"
		
		back++;
		arr[back]=x;
		if(front==-1){;
			front++;
		}
	}
	}
	dequeue{
	arr = arr-s;
     front++};
     
void pop(){
	if(fron==-1 || front>back)
	couut<<<"noelement in queue";
}     
     
bool peek (int s)
{
	if (back<front || front =-1{
		cout<<"queue is empty"
		true
	}
	else{
	     false
}
}

int empty()
	if (back<fron || front =-1){
		cout<<"queue is empty";
		return -1
	}else 
	     return arr[front]
};


int main(){
	 Queue q;
	 q.push(1);
	 q.push(2);
	 q.push(3);
	 q.push(4);
	 
cout<<qpeek();
q.pop;

cout<<qpeek();
q.pop;

cout<<qpeek();
q.pop;

cout<<qpeek();
q.pop;

cout<<q.empty()<<endl;
		
}
