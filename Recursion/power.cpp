#include<bits/stdC++.h>
using namespace std;

int power(int  n, int  p){
	
	if(p==0){
		return 1;
	}
	int prepower= power(n,p-1);
	return n*prepower;
}

int main(){
	int n,p;
	cin>>n>>p;
cout<<power(n,p);
	
	return 0;
}
