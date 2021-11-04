#include<bits/stdc++.h>

void reversSentence(String s){
	stack<string> st;
    for(int i=0 ; i<length ; i++){
    	String word = "";
    	while(s[i]= && i<s.length()
{
			word=s[i]
    		i++
		}    	
	}

	st.push(word);
	}
	
    while(!st.smpty()){
    	cout<<<st.top()<<" ";
    	st.pop();
	}cout <<endl;

}

int main (){
	
	
    string s= "hey, how are you.";
	reversSentence(s)
}

