//Ques1. Write a program to print all odd numbers till n
#include<bits/stdc++.h>
using namespace std;

int main(){
 int n,i;
 cout<<"enter the no.";
 cin>>n;
 
 for(i=2;i<n;i++){
 	if(n%i==0){
 		cout<<"not prime"<<endl;
 		break;
	 }
	
 }
 if( i==n ) {
 	cout<<"prime"<<endl;
 }
  return 0;
}
