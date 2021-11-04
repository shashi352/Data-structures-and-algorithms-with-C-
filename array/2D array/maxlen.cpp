#include<bits/stdc++.h>
using namespace std;
// show the maximun length program 
int main(){
	
	int n;
	cin>>n;
	
	char arr[100]="apple";
	cin.ignore(); // ignore the error
	cin.getline(arr,n);// cin the whole sentence not a single character
	cin.ignore(); // ignore the error
	
	int i=0;
	int maxst=0;
	int st=0;
	int maxlen=0;
	int currlen =0;
	
	
	while(i<n){
		if(arr[i]==' ' || arr[i]=='\0'){
			if(currlen> maxlen){
				maxst=st;
				maxlen=currlen;
			}
			else{
				st=i+1;
				currlen = 0;
			}
		}
		else{
			currlen++;
		}
		
		if(arr[i]='\0'){
			break;
		}
		i++;
	}
	
	cout<<arr<<endl;
	cout<<maxlen<<endl;
	
	for(i=0;i<maxlen;i++){
		cout<<arr[maxst+1]<<endl;
	}

	
}
