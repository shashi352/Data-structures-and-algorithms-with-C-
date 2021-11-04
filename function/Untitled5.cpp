// by shashi
#include<bits/stdc++.h>
using namespace std;
int decimal_to_binary(int n)
{ 
int ans=0,binary=0;

while(n>0){// mod ko save kia hun
	int x=2;		
	int lastdigit=n%x;
	ans=ans*10 + lastdigit;
	n=n/2;
}
// mod ko reverse kia hun
// reverse
	while(ans>0){
	
    int	binary_lastdigit=ans%10;
	binary=binary*10 + binary_lastdigit;
	ans=ans/10;
}
return binary;
}
int main(){
int n;
cin>>n;
 
cout<<decimal_to_binary(n);
return 0;
}
