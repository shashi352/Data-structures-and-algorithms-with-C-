#include<bits/stdc++.h>
using namespace std;
int clear(int n,int poss){
	int mask = ~(1<<poss); // first we didi a 1 to left sheft operater than
	// we are uding not oerater to change the all value
	return (n & mask); // and last we using a or perator to get our ans
}

int main(){
	// we have number and position and 
	// our task to putting zero (0) on perticular position
	cout<<clear(5,2);
}
