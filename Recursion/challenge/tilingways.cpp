#include<bits/stdc++.h>
using namespace std;

int tilingways(int n){
	
	if(n==0){ // there is not have inofe place to place here our tilce
		return 0; 
	}
	if(n==1){
		return 1;
	}
	return tilingways(n-1)+tilingways(n-2);
	
}

int main(){
	
	cout<<tilingways(4); // output 3 because we do that only 3 way 1.horizontaly 
	// 2. vertical and 
	// 3. (2 time hor.. && vertical both

	
	return 0;
}
