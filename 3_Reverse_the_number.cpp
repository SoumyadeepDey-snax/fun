#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    while(T--){
        
        int n;
        cin >> n;
        
        int rev = 0;
        
        while(n>0){
            rev += (n%10);
            rev *= 10;
            n /= 10;
        }
        
        cout<< (rev/10) <<endl;
    }
}