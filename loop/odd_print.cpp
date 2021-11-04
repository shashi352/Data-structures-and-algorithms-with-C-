//Ques1. Write a program to print all odd numbers till n
#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE=JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
  int n;
  cin>>n;

  for(int i=0 ,i<=n , i++){
      if(n%2==0){
          continue;
      }
      cout<<n<<endl;
  }
  return 0;
}
