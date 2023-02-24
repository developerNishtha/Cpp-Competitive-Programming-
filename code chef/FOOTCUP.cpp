#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x==y && x>0 && y>0){
            cout << "yes" << endl;
        } 
        else{
            cout << "no"<< endl;
        }
        
    }
    
    return 0;
}