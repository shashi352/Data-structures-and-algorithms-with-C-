// by sir
#include<bits/stdc++.h>
using namespace std;

int decimal_to_binary(int n)
{  int x=1,ans=0;
while(n>=x) // x=2 ka bhag tab tak dege jab tak 2 n ke man ke baramer yea chota ho 
x*=2; //x ki value badati ja rahi hai 2 ke power jitana // update base
 x/=2; // 2 ki value x se bad na ho jaye esh lia bhag ex - n=12 ,x =8 after modifie x ki valu 8*2=16=xxx=galat= esh lia bhag
 //use kar sakte hai but not mandotary
while(n>0){
	int lastdigit=n/x;

	ans=ans*10 + lastdigit;
	n-=lastdigit*x; //lastdigit*x gatane per n ki nae value milegii
	x/=2;// 2 ki value x se bad na ho jaye esh lia bhag ex - n=12 ,x =8 after modifie x ki valu 8*2=16=xxx=galat= esh lia bhag
 //use kar sakte hai but not mandotary
}


return ans;


};



int main(){
int n;
cin>>n;

cout<<decimal_to_binary(n);

return 0;
}
