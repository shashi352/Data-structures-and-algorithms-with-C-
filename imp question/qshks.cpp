#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int original_number = n,rem;
	cin>> n;
	
	int sum =0;
	while(n>0){
		rem=n%10;
    	sum+= pow(rem,3);
		n=n/10;
	}
	cout<<sum;
	
	if(original_number==sum){
		cout<<"Armstrong";
	}
	else{
		cout<<"Not Armstrong";
	}
	

	return 0;
}
