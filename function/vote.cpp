#include<bits/stdc++.h>
using namespace std;

int vote(int n)
{ if(n>=18){
	cout<<"Elibigle for vote beacuse age is\n";
	return n;
}
else{
	cout<<"Not elibigle for vote beacuse age is\n";
	return n;
}
 
};

int main(){
int n;
cin>>n;
cout<<vote(n);

return 0;
}
