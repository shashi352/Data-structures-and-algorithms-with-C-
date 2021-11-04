#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<algorithm> //  Sorting a string
using namespace std;

int main(){

	string str="i love you";
	cout<<str<<endl;

	string str1(10,'n');
    cout<<str1<<endl;

    string str2(str); // copy the content of str
    cout<<str2<<endl;

    string s;
    getline(cin,s);
    cout<<"i love "<<" "<<s<<endl<<endl;

// Append the string
    cout<<"Append"<<endl;
    string s1= "shashi" , s2 = "love";
    s1.append(s2);
    cout<<s1<<endl;

// replace the string
     s.assign("pyar ho gya n :)  <3");
        cout<<s<<endl<<endl;

// returning character of perticular position
     string s3 = "hashee yani pyar hai";
     cout<<s.at(2)<<endl;
     // or this aso do the same work
     cout<<s[3]<<endl;

// return the first charecter
      s3.begin();
      cout<<s3<<endl;

// clear the whole content

      s3.clear();
	    cout<<s3<<" the given string is empty"<<endl;

/*compare(): Compares the value of the string with the string passed in the
parameter and returns an integer accordingly. Its time complexity is O(N +
M) where N is the size of the first string and M is the size of the second
string.
*/
     cout<<s1.compare(s2)<<endl;

// check empty string

   string s4="mohabat ho gae hai shashi se abb kya karu";
   s4.clear();

   if(s4.empty()){
   	cout<<" this is a empty string"<<endl;
   }

/*end(): Returns an iterator pointing to a position which is next to the last
character. Its time complexity is O(1). */
     string s5=" main kya karu";
     s5.end();
     cout<<s5<<endl;

   // erase() :- for erase the content of string
     s5.erase();
     cout<<s5<< " all the content are erase"<<endl;

 /* .erase(): Deletes a substring of the string. Its time complexity is O(N) where
N is the size of the new string. */
     string s6="ilu";
     s6.erase(3,3);
     cout<<s5<< " all the content are replace"<<endl;

     /* find(): Searches the string and returns the first occurrence of the parameter
in the string. Its time complexity is O(N) where N is the size of the string. */

	 string s7=" kaho na payar hai";
     cout<<s7.find("pyar")<<endl;

     /* .insert(): Inserts additional characters into the string at a particular position.
Its time complexity is O(N) where N is the size of the new string.*/

     cout<<s7.insert(2,"pyar")<<endl;

     /*.length(): Returns the length of the string. Its time complexity is O(1).*/
	 cout<<s7.length()<<endl;

	/* .size(): Returns the length of the string. Its time complexity is O(1) */
	 cout<<s7.size()<<endl;

	/* substr(): Returns a string which is the copy of the substring. Its time
complexity is O(N) where N is the size of the substring. For example: */
	 cout<<s7.substr(3,4)<<endl;

   /* .stoi(): Returns the strings converted to int datatype.

   string s8="676798";
   	 int x = stoi(s8);
	 cout<<x+2<<endl;
	 */


/*To convert an integer to a string, we use to_string() function
  int n = 7777;
  cout<< to_string(n)<<endl;
  */

  /*  Sorting a string: To sort a string, we need to include a header file known as
algorithm in our code like this
Then we can use sort() function that is present in above header file on our string.
Sort() function takes 2 arguments viz. iterator to start of the string and iterator to
end of the string.

  sort(s7.begin,s7.end());
  cout<<s7<<endl;
  */
	return 0;
}
