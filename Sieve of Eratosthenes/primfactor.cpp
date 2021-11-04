#include<bits/stdc++.h>
using namespace std;


void prime_factor(int n)
{
	int spf[n+1]={0}; // insitised spf to 
	for(int i=2;i<=n;i++){ // here we mark spf - smallest prime factor
		spf[i]=i; // he have its self spf
	}
	
	for(int i=2;i<=n;i++){ // iterat here over n and if spf =1 than go for next
		if(spf[i]==1){ 
			for(int j=i*i;j<=n;j+=i){ // mark the whole spf number 
				if(spf[j]==j){
					spf[j]=1;
				}
			}
		}
	}
	
	while(n!=1){ // when n=0 than stped here 
		cout<<spf[n]<<" "; // whole the spf we print here
		n=n/spf[n]; // it gone ofter that one its not going one
	}
}

int main(){
	
	int n;
	cin>>n;
	
	prime_factor(n);
	
	return 0;
}
