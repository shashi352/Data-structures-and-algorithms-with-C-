#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int currsum[n+1]; // o index se i index tak sare sum calculate karega
     currsum[0] = 0;
	
	for(int i=0; i<n;i++){
		currsum[i] = currsum[i-1]+arr[i-1]; // arr[i-1] esh lia le rahe hai q ki humara array ka loop start ho raha hai
	}
	
	int maxsum=INT_MIN;
	for(int i=1; i<=n;i++){ // humare kon sii index ka se start ho rahi hai aur kaha per khatam ho rahi hai yea bataye ga
	   int sum=0;
	   // 1 se i-1 tak ke sare sum hum dekha lenge prefix sum fir us ne humara prifex sum calculate hoga	
	  for(int j=0;j<i;j++){
	  	sum = currsum[i]- currsum[j-1];
	  	maxsum = max(sum,maxsum);
	  }
	}
	
    cout<<maxsum<<endl;
	return 0;
}
