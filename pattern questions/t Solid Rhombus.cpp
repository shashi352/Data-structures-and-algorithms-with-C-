#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
    int i,j;

	
	for(i=1;i<n;i++){
		for(j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(j=n;j<=2*n-1;j++)
		   {
		    cout<<"*";
		   }cout<<endl;
	}
	return 0;
}


