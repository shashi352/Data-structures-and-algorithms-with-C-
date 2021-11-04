#include<bits/stdc++.h>
using namespace std;

int main(){
// i am shashi is right but comiler some time wrong
	int n;
	cin>>n;

	int a[n];

	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	const int N = 1e6 +2 ; //10 ki power 6 its mean
//	int idx[10]={-1,-1,-1,-1,-1,-1,-1,-1}; or 
    int idx[N];
	for(int i=0;i<N;i++){
		idx[i]=-1;
	} 
	int minidx= INT_MAX;
    //int i=0;
	for(int i=0; i<n; i++){
		if(idx[a[i]] != -1){
              minidx = min(minidx,idx[a[i]]);
		}
		else{
         idx[a[i]] = i;
		}	  
	}
	if(minidx == INT_MAX){// if my minidx not change
		cout<<"-1"<<endl;
	}
	else{ 
		cout<<minidx +1<<endl;
	}
	return 0;
}
