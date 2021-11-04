#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string s ="zfhkdtwiansviakhkzshfksdhi";
	
	int arr[26];
	
	for(int i=0;i<26;i++){
		arr[i]=0;
	}
	 
	for(int i=0;i<=s.size();i++){ // maintain the frequence
	  arr[s[i]-'a']++;	
	 }
	 
	 int maxfreq=-1;
	 int ans;
	 
	for(int i=0;i<26;i++){
		
		if(maxfreq<arr[i]){
			maxfreq=arr[i];
			ans='a' + i;
		}
	}
	
	cout<<maxfreq<<endl;
	cout<<ans<<endl;
	
	return 0;
}
