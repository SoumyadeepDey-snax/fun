// qlink - https://codeforces.com/contest/1102/problem/A
// Integer Sequence deviding
// https://codeforces.com/blog/entry/64439

/*

for any number n, the sequence of 4 numbers : n,n-1,n-2,n-3 (n and n-3 grouped in one n-1,n-2 grouped in another) results in 0
so any 4 multiple ans is 0;
if modulus is 1, let's say 9 --> 9,8,7,6 = 0; 5,4,3,2 = 0; what will always be left is 1, which ever group it goes result will be 1 after difference
if mudulo is 2, lets say 10 --> 10,9,8,7 = 0; 6,5,4,3 = 0; 2,1 is what will be left, both going to different groups, 2-1 = 1
similarly for modulo is 3 it will be 0 as 3,2,1 will be left and (3)-(2,1) will be 0

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int m = n%4;

    if (m == 0 || m == 3){
        cout<<0;
    }
    else if (m == 1 || m == 2){
        cout << 1;
    }
}