#include<bits/stdc++.h>
using namespace std;

int rev(int ans){
	int rev=0;
	while(ans>0){
		int lastdigt=ans%10;
		 rev=rev*10+lastdigt;
		ans=ans/10;
	}
	return rev;
}



int binary_add(int a,int b){
	int ans=0,prev_cary=0;
	while(a>0 && b>0){
	if(a%2==0 && b%2==0){
			ans=ans*+prev_cary;
			prev_cary=0;
	}
	else if((a%2==1 && b%2==0) || (a%2==0 && b%2==1)){
		if(prev_cary==1){
		ans=ans*10+0;
		prev_cary=1;
		}
		else {
			ans=ans*10+1;
			prev_cary=0;
		}
	}
	else{
			ans=ans*10+prev_cary;
			prev_cary=1;
	}
	a/=10;
	b/=10;
}

while(a>0){
	
	if(a%2==0){
		if(prev_cary==1){
		ans=ans*10+1;
		prev_cary=0;
	}
	     else{
	     	ans=ans*10+0;
	     	prev_cary=0;
	}
	}else{
		if(prev_cary==1){
		ans=ans*10+0;
		prev_cary=1;
	}
     	else{
		ans=ans*10+1;
		prev_cary=0;
	}
	}
	a/=10;
}

while(b>0){
	
	if(b%2==0){
		if(prev_cary==1){
		ans=ans*10+1;
		prev_cary=0;
	}
	     else{
	     	ans=ans*10+0;
	     	prev_cary=0;
	}
	}else{
		if(prev_cary==1){
		ans=ans*10+0;
		prev_cary=1;
	}
     	else{
		ans=ans*10+1;
		prev_cary=0;
	}
	}
	b/=10;
}

    ans=rev(ans);
	return ans;
}


int main(){
	int a,b;
	cin>>a>>b;
	
	cout<<binary_add(a,b);
}
