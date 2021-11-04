#include<bits/stdc++.h>
using namespace std;

int countmazepath(int n, int i,int j){
	if(i==n-1 && j==n-1){
		return 1;
	}
	
	if(i>=n || j>=n){
		return 0;
	}
	
	return countmazepath(n,i+1,j) + countmazepath(n,i,j+1); // we are gointo right direction ore going to down direction for going to the n number
	
}

int main(){
	
cout<<countmazepath(3,0,0);
	
	return 0;
}
