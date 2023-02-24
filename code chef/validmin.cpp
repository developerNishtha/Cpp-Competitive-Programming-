#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
       int a,b,c;
       cin >> a >>b >>c ;
       if(a==b && b==c && a==c){
        cout << "yes" << endl;
       }
       else if(a==b && c>a ){
        cout << "yes" << endl;
       }
       else if (a==c && b>a){
        cout << "yes" << endl;
       }
       else if (b==c && a>b){
        cout << "yes" << endl;
       }
       else {
        cout << "no" << endl;
       }
            
    }
    return 0;
}