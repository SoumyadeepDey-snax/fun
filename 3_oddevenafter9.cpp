// link - https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem

#include<bits/stdc++.h>
using namespace std;

int a,b;

int main(){
    cin>>a>>b;
    string digit[] = {"one","two","three","four","five","six","seven","eight","nine"};
    
    for (int i=a; i<=b; i++){
        
        // 1 <= i <= 9
        if ((i >= 1) && (i <= 9)){
            cout<<digit[i-1]<<endl;
        }
        else if(i > 9){
            if (i%2 == 0){
                cout<<"even"<<endl;
            }
            else{
                cout<<"odd"<<endl;
            }
        }
    }
}