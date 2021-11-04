#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int idx[10]={-1,-1,-1,-1,-1,-1,-1,-1};
	int minno=-1;
	for(int i=0;i<n;i++){
	   idx[i]=arr[i];
	   minno=INT_MAX(idx[i],minno);
	   cout<<minno<<endl;
	}
	return 0;
}
