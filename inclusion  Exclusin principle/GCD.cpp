#include<bits/stdc++.h>
using namespace std;
//			        	  a- b = substraction
// ex- by substraction - 42-24=18
//					     24-18=6
//					     18-6=12
//					     12-6=6
//					     6-6=0



//			     	a- b = remender
// ex-  remender - 42%24=18
//                 24%18=6
//                 18%6=0


int gcd(int a,int b) // its solve by remender (%) and  substration (-)
{
	
	while(b!=0){
	int rem = a%b;
	a=b;
	b=rem;
	}
	return a;
	
	
}
int main(){
	
	int a,b;
	cin>>a>>b;
	cout<<gcd;
	
	return 0;
}
