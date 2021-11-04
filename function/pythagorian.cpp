#include<bits/stdc++.h>
using namespace std;

bool pythagorian(int x,int y,int z)
{  int a=max(x,max(y,z));
   int c,b;
   if(a==x){
  	b=y;
  	c=z;
  }
  else if (a==y){
  	
  	b=x;
  	c=z;
  }
     else {
  	b=y;
  	c=z;
  }

if(a*a==b*b+c*c){
   return true ;
}
  
};



int main(){
int x,y,z;
cin>>x>>y>>z;


if(pythagorian(x,y,z)){
	cout<<"Pythogorian";
}
   else{
	cout<<"NOT pythogorian";
}


return 0;
}
