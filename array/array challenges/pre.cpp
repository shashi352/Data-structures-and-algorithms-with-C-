#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;
int arr[n];
int i;
for (int i=0; i<n;i++){
    cin>>arr[i];
}
int maxno= -199999;

for (int i=0; i<n;i++){
	maxno=max(maxno,arr[i]);
    cout<<maxno<<endl;
}
    return 0;
}
