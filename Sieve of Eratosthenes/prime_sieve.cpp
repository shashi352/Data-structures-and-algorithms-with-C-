#include<bits/stdc++.h>
using namespace std;

void sieve_prime(int n) {
	
	int prime[100]={0}; 
	
	for(int i=2;i<=n;i++){
		if(prime[i]==0){
			for(int j=i*i;j<=n;j+=i){
				prime[i]=1;
			}
		}
	}
	
	for(int i=2;i<=n;i++){
		if(prime[i]==0){
			cout<<i<<" ";
		}
	}cout<<endl;
}

int main(){
	
	int n;
	cin>>n;
	
	sieve_prime(n);
	
	return 0;
}
