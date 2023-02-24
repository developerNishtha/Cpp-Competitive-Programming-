#include <bits/stdc++.h>
using namespace std;


int main(){
    int T;
    cin >> T ;
    while (T--)
    {
       int n;
       cin >> n;
       int a[n];
       for (int i = 0; i < n; i++)
       {
           cin >> a[i] ;
       }
       int count =0;
       for (int i = 0; i < n; i++)
       {
           if (a[i] >= 1000){
               count +=1;
           }
       }
       cout << count << endl;
       
       
    }
    
    return 0;
}