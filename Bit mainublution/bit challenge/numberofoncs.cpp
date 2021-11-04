#include<bits/stdc++.h>
using namespace std;

int numberofones(int n){
	
	int count=0; // how many we 1 found we save it here
	while(n!=0){ // we also right only n // when n is equal to 0 or false than its stoped
		n = (n &(n-1)); // here n substraced  with 1 and AND  than and its
		count++; // save the entired value of it
	}
	return count;
}

int main(){
	
	cout<<numberofones(19);
	// its output is 3 beacuse 19=(01011) has 3 times 1 in here
}
