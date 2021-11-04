#include<bits/stdc++.h>
using namespace std;

int knapsack(int value[],int wt[],int n,int w){ // here only w is a knapsack weight
	// here wt is the weight of the thing
	if(n==0 || w==0){
		return 0;
	}
	
	if(wt[n-1]>=w){
		return knapsack(value,wt,n-1,w); // we are not include this item becuse not have enough w 
	}
	
	return max(knapsack(value,wt,n-1,w-wt[n-1])+value[n-1] , knapsack(value,wt,n-1,w));
	// here we find the maximum weight of napsack
	
	
	/*                                 // thats this include this 
	knapsack(value,wt, n-1,w-wt[n-1]) + valu[n-1]//we are including in napsack( beg )
	knapsack(value,wt, n-1,w) // we are not include this item becuse not have enough w 
	*/
}

int main(){
	
	int wt[]={10,20,30};
	int value[]={100,50,150};
	int w=50;
	
	cout<<knapsack(value,wt,3,w)<<endl;
	
	return 0;
}
