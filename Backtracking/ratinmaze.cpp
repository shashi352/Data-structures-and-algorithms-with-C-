#include<bits/stdc++.h>
using namespace std;
// i am right the compiler is wrong
// program name :- rat in maze

// Dynamicaly alocate arr that why using**
//          for go (right)x-axes ,y-axes(left), array size
bool issafe(int** arr,int x,int y,int n){
	if(x<n && y<n && arr[x][y]==1){
		return true;
	}
	return false;
}

bool ratinmaze(int** arr,int x,int y,int n,int** solarr){

	if((x==(n-1)) && (y==(n-1))){
		solarr[x][y]=1;
	    return true;
	}

	if(issafe(arr,x,y,n)){
		solarr[x][y]=1;
		if(ratinmaze(arr,x+1,y,n,solarr)){
			return true;
		}
		if(ratinmaze(arr,x,y+1,n,solarr)){
			return true;
		}
		solarr[x][y]=0; // backtracking
		return false;
	}
	   return false;

}

int main(){

	int n;
	cin>>n;

	int** arr=new int*[n];// we are dynaicaly allocate memory
	for(int i=0;i<n;i++){
		arr[i]=new int[n];
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		cin>>arr[i][j];}
	}


	int** solarr=new int*[n];// we are dynaicaly allocate memory
	for(int i=0;i<n;i++){
		solarr[i]=new int[n];
	}

	if(ratinmaze(arr,0,0,n,solarr)){

	  for(int i=0;i<n;i++){

		for(int j=0;j<n;j++){

		    cout<<solarr[i][j]<<" ";
    	}cout<<endl;
	}
}

	return 0;
}
/* input nubers are example
1 0 1 0 1
1 1 1 1 1
0 1 0 1 0
1 0 0 1 1
1 1 1 0 1
*/








