#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int num=1 ;
	for(int i=1; i<=n ; i++){
       for (int j=1 ;j<=i ; j++){ // jitna i hai utane khane main printing hai
         cout<<num<<" "; 
           num++;
         }cout<<endl;
        }
        
        return 0;
	   }
