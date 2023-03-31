// link - https://www.hackerearth.com/problem/algorithm/mangoes/

// EVEN = E, ODD = O; O + O = O, E + O = O, E + E = E; so only way that the number is made of even numbers is if it is even,exception is 2 coz 1+1 both odd

#include <iostream>
using namespace std;
int main() {
	int W;
	cin >> W;
	if (W>2 && W%2==0){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}