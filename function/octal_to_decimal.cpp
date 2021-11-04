#include<bits/stdc++.h>
using namespace std;

int binary_to_decimal(int n)
{  int x=1,ans=0;
while(n>0){
int	y=n%10;
    ans+=x*y;
	x=x*8;
	n=n/10;
}
return ans;
};



int main(){
int n;
cin>>n;

cout<<binary_to_decimal(n);

return 0;
}
