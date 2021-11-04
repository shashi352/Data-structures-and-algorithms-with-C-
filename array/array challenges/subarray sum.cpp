#include<iostream>
using namespace std;
// all sub array total sum
int main(){
  int n;
  cin>>n;
  int arr[n];

   int sum = 0;
  for(int i=0;i<=n-1;i++){
      for(int j=0;j<=n-1;j++){
        sum = sum+ i+j;
      }
  }

  cout<<sum;

    return 0;
}
