// by sir
#include<bits/stdc++.h>
using namespace std;

int decimal_to_octal(int n)
{  int x=1,ans=0;
while(n>=x)
x*=8;
 x/=8; //use kar sakte hai but not mandotary
while(n>0){
	int lastdigit=n/x;

	ans=ans*10 + lastdigit;
	n-=lastdigit*x;
	x/=8;
}


return ans;


};



int main(){
int n;
cin>>n;

cout<<decimal_to_octal(n);

return 0;
}
