#include<bits/stdc++.h>
using namespace std;

int decimal_to_binary(int n)
{  int ans=0;

while(n>0){
	int x=2;		
	int lastdigit=n%x;
	ans=ans*10 + lastdigit;
	n=n/10;
	cout<<ans;
}




};



int main(){
int n;
cin>>n;

cout<<decimal_to_binary(n);

return 0;
}
