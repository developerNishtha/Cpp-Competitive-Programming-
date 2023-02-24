#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
    int num;
    cin >>num;
    string str;
    cin >>str;
    int ex[num];
    
    char alph[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
   for (int i = 0; i < num; i++)
   {
    for (int j = 25; j >= 0; j--)
    {
        if(str[i]==alph[j]){
                ex[i]=j+1;
        }
    }
    
   }
   sort(ex,ex+num);
   cout<<ex[num-1]<<endl;
   


}

int main()
{
	int t;
	cin >> t;
	while (t--){
		nishtha();
	}
	return 0;	
}