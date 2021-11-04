#include<bits/stdc++.h>
using namespace std;

int main(){

   int arr[]={2,3,4,5,5};
   cout<<*arr<<endl; // that show the the first element show in this array
    
	int *ptr=arr;
	for(int i=0;i<5;i++){
		cout<<*(arr + i);
	}
return 0;
}
