#include<bits/stdc++.h>
using namespace std;

int countpath(int s ,int e){
	
	if(s==e){
		return 1;
	}
	
	if(s>e){
		return 0;
	}
	
	int count =0; // for counting how many path here
	for(int i=0;i<=e;i++){
		count+= countpath(s+i,e);
		
	}
	return count;
}

int main(){
	
 cout<<countpath(0,3);
	
	return 0;
}
