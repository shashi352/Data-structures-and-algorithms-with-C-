#include<bits/stdc++.h>
using namespace std;

int swap(int *a,int *b){ // pointer jayega to pointer hi recived hoga
	int temp = *a;
	*a=*b;
	*b=temp;

	return *a,*b;
}

int main(){

	int a=10; // a is a variable store the value of a
	int b=20;
    cout<<"Before swapping ";
    cout<<&a<<" "<<&b<<endl;
    cout<<a<<" "<<b<<endl;
    
    cout<<swap(&a,&b)<<endl;
                             // addresh wohi hii rahegi lekin addresh change ho gayengii
    cout<<"After swapping "; 
    cout<<&a<<" "<<&b<<endl;
	cout<<a<<" "<<b<<endl;
}

