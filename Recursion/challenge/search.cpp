#include<bits/stdc++.h>
using namespace std;
// its program only return index numbers

int firstocc(int arr[] ,int n,int i,int key){ // its only return when elent found in first search
	if(arr[i]==key){
		return i; // its program only return index numbers
	}
	if(i==n){
		return -1; // i going the n nuber but could not found so return -1
	}
	return firstocc(arr,n,i+1,key);
	
}

int lastocc(int arr[],int n,int i,int key){
if(n==i){ // i iterat and go i 
  	return -1; // the key its not present in that array
  }
	int restarray = lastocc(arr,n,i+1,key); // first we traver its to the last index now we found our 
  // our key 
 /* if(restarray!=0){ // we can skip this// we could not found searching key
  	return -1;
  }
  */
  
  if(arr[i]==key){
  	return i;
  }

}

int main(){
//index no.- 0,1,2,3,4,5,6
  int arr[]={4,3,2,4,2,7,5};
    cout<<firstocc(arr,7,0,2)<<endl;
    cout<<lastocc(arr,7,0,2);
	
	return 0;
}

