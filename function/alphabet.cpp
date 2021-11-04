#include<bits/stdc++.h>
using namespace std;

char alphabet(char c)
{
 if((c>='a' && c<='z') || (c>='A' && c<='Z' )){
  cout<<"this is alphabet \n";	
 }

 else {
 	cout<<"this is not alphabet";
 }
}
int main(){
char c;
cin>>c;
cout<<alphabet(c);

return 0;
}
