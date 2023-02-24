// #include <iostream>
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// void nishtha()
// {
//    int n,m;
//     cin>>n>>m;
//     string s1,s2;
//     cin>>s1>>s2;
//     if(s1.length()<s2.length()){
//         string temp=s1;
//         s1=s2;
//         s2=temp;
//     }
//     map<char,int>n1,n2;
//     for(char c:s1){
//         n1[c]++;
//     }
//     for(char c:s2){
//         n2[c]++;
//     }
//     int s=0,e=0;
//     for(auto i:n2){
//         if(n1[i.first]<i.second){
//            cout<<"No"<<endl;
//            return;
//         }
//         n1[i.first] -=i.second;
//     }
//     for(auto i:n1){
//         if(i.second%2==1){
//             s+=1;
//         }else{
//             e+=1;
//         }
//     }
//     if(s<=1){
//         cout<<"Yes"<<endl;
//     }else{
//         cout<<"No"<<endl;
//     }
    
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         nishtha();
//     }
//     return 0;
// }



