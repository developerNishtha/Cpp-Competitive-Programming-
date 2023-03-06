#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    ll n, m = 0, e = 0,o=0,w=0,x=0;
    cin >> n;
    string s;
    cin >> s;
    string s1 = "meow";
    bool flag=false;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
   
    if (n <= 3)
    {
        cout << "NO" << endl;
        return;
    }
    if(s[x]=='m'){
        while((s[x]=='m') && x<n){
            m=1;
            x++;
        }
    }
    else{
        cout<<"NO"<<endl;
        return;
    }
      if(s[x]=='e'){
        while((s[x]=='e') && x<n){
            e=1;
            x++;
        }
    }
    else{
        cout<<"NO"<<endl;
        return;
    }
      if(s[x]=='o'){
        while((s[x]=='o') && x<n){
            o=1;
            x++;
        }
    }
    else{
        cout<<"NO"<<endl;
        return;
    }
      if(s[x]=='w'){
        while((s[x]=='w') && x<n){
            w=1;
            x++;
        }
    }
    else{
        cout<<"NO"<<endl;
        return;
    }
   if(m==1 && e==1 && o==1 && w==1 && x==n){
    cout<<"YES"<<endl;
        return;
   } 
   else{
        cout<<"NO"<<endl;
        return;
    }
   
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        nishtha();
    }
    return 0;
}