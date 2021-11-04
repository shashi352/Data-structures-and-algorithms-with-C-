#include<bits/stdc++.h>
using namespace std;

int main(){
	float num1 , num2;
	char c;
	cout<<"enter two no.s\n";
	cin>>num1>>num2;
	
	cout<<"enter the operand \n";
	cin>>c;
	
	switch(c){
	
	case '+':
		cout<<num1+num2;
		break;
		
	case '-':
		cout<<num1-num2;
		break;
		
	case '*':
		cout<<num1*num2;
		break;
		
	case '/':
		cout<<num1/num2;
		break;
		
	default :
		cout<<"invalid input";
}
		
		
}
