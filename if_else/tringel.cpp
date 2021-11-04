#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int sidea,sideb,sidec;
	cin>>sidea>>sideb>>sidec;
	
	if(sidea==sideb || sideb==sidec){
		cout<<"this tringel is equilent ";
	}
	else if(sidea==sideb || sideb==sidec || sidea==sidec ){
		cout<<"this tringel is isosceles";
	}
	else{
		cout<<"this tringel is scalence";
	}
	return 0;
}
