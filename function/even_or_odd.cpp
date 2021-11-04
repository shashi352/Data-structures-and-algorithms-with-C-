#include<bits/stdc++.h>
using namespace std;

int odd_or_even(int n)
{
 if (n%2==0){
 	cout<<"EVEN"<<" ";
 	return n;
 }else{
 	cout<<"ODD"<<" ";
 	return n;
 }
}
int main(){
int n;
cin>>n;
cout<<odd_or_even(n);

return 0;
}
