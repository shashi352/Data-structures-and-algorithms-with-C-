#include<bits/stdc++.h>
using namespace std;

class student{
	string name;
	public:

		int age;
		bool Gender;


		void setname(string s){ // to set and acces private member data type
			 name =s; // set the value in private
		}

		void getname(string s){ // print private member function
			cout<<name;
		}

		// that is the constactor
		student(string s, int a, bool g){
			name = s;  // on the name having a that string
            age = a;
            Gender=g;
		}

		void printInfo(){
			cout<<"name ";
			cout<<name<<endl;
			cout<<"age ";
			cout<<age<<endl;
			cout<<"Gender ";
			cout<<Gender<<endl;
		}
};

int main(){
/* this all thing we do for  for taking input from user what if
 directly puting value on th student
 class for that we use constactor we do it i down below to below */

	student arr[1];

    for(int i=0;i<1;i++){
    	string s;
    	cout<<"name ";
    	cin>>s;
    	arr[i].setname(s);
    	cout<<"age ";
    	cin>>arr[i].age;
    	cout<<"Gender ";
    	cin>>arr[i].Gender;
	}
	
	
	for(int i=0;i<1;i++){
         arr[i].printInfo();
	}

	return 0;
}
