#include<bits/stdc++.h>
using namespace std;
// dev c compilr its not working proprly
bool mycompare(pair<int ,int> p1, pair<int,int> p2){
	return p1.first<p2.first;
	// which is have smallest value that become here first this indicate the arr[i] value	
}

int main(){
	int arr[]={1,16,7,14,5,3,2,9};
	vector <pair<int,int>> v;
	
	for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
	/*	pair<int,int> p;
		p.first=arr[i]; // in first position on the array we insert array i value
		p.second=i;     // on the second vector pair we insert array i index no.
		this way we can also do it but i have onother way to do it */
		
		v.push_back(make_pair(arr[i],i));
	}
	sort(v.begin(),v.end(),mycompare);
	
	for(int i=0;i<v.size();i++){
		arr[v[i].second]=i;// here on v[i] value we are puting value of index i
	}
	
	for(int i=0;i<v.size();i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	
	
}
