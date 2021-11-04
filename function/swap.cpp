#include<bits/stdc++.h>
using namespace std;

void swap(int a ,int b)
{ int temp;
 temp=a;
 a=b;
 b=temp; 
 cout<<"a = "<< a <<"\n"<<"b = "<<b;
 return;
};

int main(){
int a,b,c;
cout<<"enter first no. a =\n";
cin>>a;
cout<<"enter first no. b =\n";
cin>>b;
swap(a,b);

return 0;
}
