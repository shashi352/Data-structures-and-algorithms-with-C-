#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n; 
	cin>>n;
	int arr[n]; 
	for(int i=0;i<n;i++){
        cin>>arr[i];
  }
		int ans=0;
	    for(int i=0;i<n;i++){
		int maxno=-1;
	 	if(maxno<arr[i] && arr[i]>arr[i+1]){
			ans++;
		}
		maxno=max(maxno,arr[i]);
		
	}
	cout<<ans<<endl;
	return 0;
}
