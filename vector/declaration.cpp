#include<bits/stdc++.h>
#include<vector>
using namespace std;


int main(){
	// vector declaration
	vector<int> v;
	v.push_back(1);// end of the vector we add 1
	v.push_back(2);// after 1 we add 2 in vector
	v.push_back(3);// after 2 dwe add 3 in vector
	
	for(int i=0;i<v.size();i++){
	cout<<v[i]<<endl;
    }// output :-1,2,3
    
    cout<<" Iterator Method"<<endl;
    vector<int>::iterator it;
    for(it=v.begin();it<v.end();it++){
    	cout<<*it<<endl;
	}// output :-1,2,3
	
	// auto take data type throw auto to element of element
	cout<<"Auto declare method";
	for(auto element : v){
		cout<<element<<endl;
	}// output :-1,2,3
	
	v.pop_back();// output :-1,2
	
    cout<<"Insilizetion within a declaration ";
	vector<int> v2(3,50); // here 3 is a how many elenet you want and 50 is each element value
	//output:- 50 50 50
    
    vector<int> ::iterator its; // here it is a iterator
    for(its=v.begin();its<v2.end();its++){
    cout<<*its<<endl; 
    }
	
    
    cout<<"Atfer swapping";
	// its have inbuild fuction
	swap(v,v2);
	
	for(auto element:v){
		cout<<element<<endl;
	}
	
	for(auto element:v2){
		cout<<element<<endl;
	}
	
    
}
