// link - https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/friends-relationship-1/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--){

        int n;
        cin>>n;

        for(int i=0;i<n;i++){

            for(int j=1;j<=i+1;j++){
                cout<<"*";
            }

            for(int j=1;j<=((n-i-1)*2);j++){
                cout<<"#";
            }

            for(int j=1;j<=i+1;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
}
