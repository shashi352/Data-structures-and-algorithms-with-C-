#include<bits/stdc++.h>
using namespace std;

bool is_power_of2(int n){
	return  (n && !(n & n-1)); // if return true (1) than its is a power of 2 and
	//  otherwise its not power of 2
}
// ex n=6=(0110)                                                |
//           |   after shifting that position we get (n-1)=5=(0101)
//mean all the power of 2 bit is a set bit meani its have only 1  ex - 8 =(1000)
// and if all bit are unset that its not poewer of 2 ex - 6=(0110)
// so we can say that n has only one set bit , and n-1 all set bits after thhat position
int main(){
	
	cout<<is_power_of2(4);
	
}
