#include<bits/stdc++.h>
using namespace;

void inserttAtBottom(stack<int>st ,int el){
	if(st.empty){
	st.push(el)
	return }
	
	int topel=st.top();
	st.pop()
    inserttAtBottom(st,el)
    
}

void reversestac(stack<int> &st){
	if(st.empty(){
		return
	}
	
	int es = st.top();
	st.pop();
	reversestac();
	inserttAtBottom(st,el)
}

int main(){
	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	
	reversestac(st);
	while(!st.empty()){
		cout<<st.top<<<endl
		
	}cout<<endl
}
