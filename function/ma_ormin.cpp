#include<bits/stdc++.h>
using namespace std;

int max(int a,int b,int c)
{
  if(a>b && a>c){
  	cout<<a<<" "<<"A is grater";
  	return a;
  }
   else if(b>a && b>c){
  	cout<<b<<" "<<"B is grater";
  	return b;
  }
   else {
  	cout<<c<<" "<<"C is grater";
     
}

};

int min(int a,int b,int c)
{
  if(a<b && a<c){
  	cout<<a<<" "<<"A is smallest";
  	return a;
  }
   else if(b<a && b<c){
  	cout<<a<<" "<<"B is smallest";
  	return b;
  }
     else{
  	cout<<c<<" "<<"C is smallest";
  return c;
}
};

int main(){
int a,b,c;
cin>>a>>b>>c;

cout<<max(a,b,c);
cout<<min(a,b,c);

return 0;
}
