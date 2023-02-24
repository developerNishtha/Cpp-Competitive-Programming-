#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int number;
cin >>number;

if(number %2 ==1) {
    for (int i = 0; i < number; i++)
    {
         cout <<1<<" ";
    }
}
else {
for (int i = 0; i < number-2; i++)
    {
        cout <<2<<" ";
        
    }
    cout <<1<<" "<<3<<" ";
}
cout <<endl;
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