#include<bits/stdc++.h>
using namespace std;
class A{
	private:
		int a;
		void funca(){
			cout<<"this is private";
		}
		
	public:
		int b;
		void funcb(){
			cout<<" this is public";
		}
		
	protected :
		int c;
		void funcc(){
			cout<<"this is proyected";
		}
};

int main(){
	A obj;
	obj.funcb();
	//obj.funcc(); // tiis is could not called bcouse data member function is potected not public
	//genrate error
	//obj.funca();//tiis is could not called bcouse data member function is private not public
    //gentare error
	
}
