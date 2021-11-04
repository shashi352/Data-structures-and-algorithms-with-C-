// still working

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
    int i,j;
    int space=2*n-2*i;
	
	for(i=0;i<=n;i++){
		for(j=1;j<=n-i;j++){
			 cout<<" ";
  } 
    int pre=1;
    for(j=0;j<=i;j++){
    	cout<<i ;
		i=pre+j;
		int temp,temps;
    	temp=pre;
    	pre=j;
    	j=temp;
    	
    	j=temps;
    	temps=i;
    	j=i;
	}
	
  cout<<endl;
}

	return 0;
}


