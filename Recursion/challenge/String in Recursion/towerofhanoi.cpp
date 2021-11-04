#include<bits/stdc++.h>
using namespace std;

void towerofhanoi(int n,char src,char dest, char helper){
	if(n==0){// base case
		return ;
	}
	towerofhanoi(n,src,helper,dest);
	cout<<"moving to "<<src<<"to"<<dest;
	towerofhanoi(n,dest,src,helper);
	
}

int main(){
	
	
	towerofhanoi(3,'A','B','C');

	
	return 0;
}
