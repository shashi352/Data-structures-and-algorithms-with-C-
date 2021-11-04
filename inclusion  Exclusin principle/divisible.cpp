#include<bits/stdc++.h>
using namespace std;

// questin - suppose c1 ,a divisible by 5
//                   c2 ,b divisible by 7
//                   c3 ,c divisibe by 5 and 7 than 
//                     total nuber of divisible
// ex- a take a laungeuage german 
//      b take a launguage etalian
///     c  take both launguage 
//       found total sum

int divisible(int n,int a,int b){
	int c1=n/a;// found the a count
	int c2=n/b;
	int c3=n/(a*b);
	
	return c1+c2-c3; // now we found the total nuber
}

int main(){
	
	int n,a,b;
	cin>>n>>a>>b;
	cout<<divisible(n,a,b);
	
}
