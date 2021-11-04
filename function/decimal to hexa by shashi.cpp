// by shashi
#include<bits/stdc++.h>
using namespace std;
int decimal_to_octal(int n)
{ 
int ans=0,octal=0;

while(n>0){// mod ko save kia hun
	int x=16;		
	int lastdigit=n%x;
	ans=ans*10 + lastdigit;
	n=n/16;
}
// mod ko reverse kia hun
// reverse
	while(ans>0){
	
    int	octal_lastdigit=ans%10;
	octal=octal*10 + octal_lastdigit;
	ans=ans/10;
}
return octal;
}
int main(){
int n;
cin>>n;
 
cout<<decimal_to_octal(n);
return 0;
}
