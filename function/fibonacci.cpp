#include<bits/stdc++.h>
using namespace std;

int fibionacci(int n)
{
int a=0,b=1,c;

	for(int i=1;i<=n;i++){
		cout<<a<<",";
		c=a+b;
		a=b;
		b=c;
	}

}
int main(){
int n;
cin>>n;
 
 cout<<fibionacci(n);

return 0;
}
