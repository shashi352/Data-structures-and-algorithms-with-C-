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

		// that is the parameteraized constactor
		student(string s, int a, bool g){
			name = s;  // on the name having a that string
            age = a;
            Gender=g;
            cout<<"that is the parameteraized constactor"<<endl;
		}

		student(){
			cout<<"that is the default constactor"<<endl;
		}

		student(student &a){
			name =a.name;
			age = a.age;
			Gender=a.Gender;
			cout<<"copy constactor"<<endl;
}

		void printInfo(){
			cout<<"name ";
			cout<<name<<endl;
			cout<<"age ";
			cout<<age<<endl;
			cout<<"Gender ";
			cout<<Gender<<endl;
		}
		
		
		// operator overloading 
		// my overator gernally not befave on that way but using operator overloading we can do it
		//name==a.name here first name its a name of b obeject(student )  == double equal too use for comparison
		// and a.name its  name of a 
	    //  both compare if its condition is true than return same and if false than return not same 

		bool operator ==(student &a){
			if(name==a.name && age==a.age && Gender==a.Gender){
				return true;
			}
			return false;
		}
};

int main(){

 // now here we are using constucter
 student a("shashi",20,1);
 a.printInfo();


  student b; // we could not pass parameter so its colled to default


  student c=a; // this is colled copy constactr
  student d(b); // this is also colled  copy constactr




// operator overloading
// compare a &b and check its value are same or not
if(c==a){
	cout<<"same";
	return true;
}
else{
	cout<<"not same";
	return false;
}


	return 0;
}

