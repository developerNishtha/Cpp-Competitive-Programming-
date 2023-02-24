#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,a,b,c;
        cin >>n;
        cin >> a >> b >> c;
        if(n==1){
            if(a==2 && b==3){
                cout << "yes" << endl;
            }
            else if(a==3 && c==2){
                cout << "yes" << endl;
            }
            else {
                cout << "no" << endl;
            }
        }
        else if (n==2){
            if(b==1 && a==3){
                cout << "yes" << endl;
            }
            else if(b==3 && c==1){
                cout << "yes" << endl;
            }
            else {
                cout << "no" << endl;
            }
        }
        else{
            if(c==1 && a==2){
                cout << "yes" << endl;
            }
            else if(c==2 && b==1){
                cout << "yes"<< endl;
            }
            else {
                cout << "no" << endl;
            }
        }

    }
    return 0;
}