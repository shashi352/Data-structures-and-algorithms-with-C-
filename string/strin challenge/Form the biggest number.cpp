#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string s = "52725286399827272";

     sort(s.begin(),s.end(),greater<int>());

     cout<<s<<endl;

	return 0;
}

