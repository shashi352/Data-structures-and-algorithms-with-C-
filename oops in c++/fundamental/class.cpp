#include<bits/stdc++.h>
using namespace std;

class student{
	public:
		string name;
		int age;
		bool Gender;
		
		void show(){
			cout<<"name ";
			cout<<name<<endl;
			cout<<"age ";
			cout<<age<<endl;
			cout<<"Gender ";
			cout<<Gender<<endl;
		}
};

int main(){
	
	student a;
	a.name = "shashi";
	a.age =20;
	a.Gender =1;
	a.show();

	
	return 0;
} 
