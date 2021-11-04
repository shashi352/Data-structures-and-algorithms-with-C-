#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	for(int i=1 ; i<=n ; i++){ // dono taraf se pattern bana kar dekho row aur col
       int j;
	   for ( j=1 ;j<=n-i ; j++){ // jitna i hai utane khane main printing hai
         cout<<" ";
         }
         int k=1;
         for(;j<=n;j++)
         {
         	cout<<k--;
		 }
		 k=2;
		 for(;j<=n+i-1;j++){
		    
		   cout<<k++;
        }
		cout<<endl;
    }
        return 0;
	   }
