#include<bits/stdc++.h>

using namespace std;
// all sub array sum
int main(){ 
  int n;
  cin>>n;
   int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
  }

  int pd=2;
  int j=2;
  int curr=2;
  int ans;

  while(j<n){

    if(pd==arr[j]-arr[j-1]){// agar perivious command different  equal hai cuurrent command diffrent ke tabhai tab
        curr++;
    }
    else{// agar perivious command different  equal hai cuurrent command diffrent ke tabhai tab
       pd=arr[j]-arr[j-1];
        curr=2;
    }
    ans=max(ans,curr);
    j++;
  }

  cout<<ans<<endl;
    return 0;
}

