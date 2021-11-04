#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int a=10; // a is a variable store the value of a
	int *aptr=&a; // this (*aptr) pointr save the addresh of a
	
	cout<<a<<endl;
	cout<<*aptr<<endl;
	
	*aptr=20;
	cout<<*aptr;
}
