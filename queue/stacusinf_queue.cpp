#include "bits/stdc++.h"

class stack {
	int n= 0;
	 queue<int> q1;
	queue<int> q1;
	public:
		stack(){
			n=0
		}
	void push(int val){
		q2.push(val)
        while(!q1.empty){
		q2.push(q1.pop);
		q1.pop;
	}
	queue<int> temp=q1;
	q1 = q2;
	q2 = temp
	
}
     void pop(){
      q1.pop;
      n--;
}

     void top(){
     return q1.front;
	 }
	 
	 void size(){
	 	return n;
	 }
};



int main(){
	stack st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	
	cout<<st.top<<endl
	st.pop()
	
	cout<<st.top<<endl
	st.pop()
	
	cout<<st.top<<endl
	st.pop()
	
	cout<<st.top<<endl
	st.pop()
	cout<<st.top<<endl
	st.pop()
	cout<<st.top<<endl
}
