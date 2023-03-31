#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    while(T--){
        
        int n;
        cin >> n;
        
        int s = 0;
        while(n>0){
            s += (n%10);
            n /= 10;
        }
        cout<<s<<endl;
    }
}