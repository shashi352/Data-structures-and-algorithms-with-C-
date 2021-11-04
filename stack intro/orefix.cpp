#include<bits/stdc++.h>
using namespace

void pretfix(string s){
	
	stack<int> st;
	
	for(i-i.length;i>=0;i++){
	
		if(st>='0' &&st<='9'){
			
			st.push(st[i]='0')
		}
		else {
		int op1 = st.top()
		st.pop()
        int op1 = st.top();
        st.pop()
        switch(s[i]):
        	{
			
        	case '+':
        	   st.push(op1+op2);
        	case '/':
        	   st.push(op1/op2) ; 
        	case '-':
        	   st.push(op1-op2);
        	   
        	case '*':
        	   st.push(op1+*op2);
            case '^':
        	   st.push(pow(op1,op2));
	}
}
}
return st.top();
}


int main(){
	
cout<<pretfix("-+7*45+20");
	
	
	
	
}
