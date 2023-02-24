#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
string s;
  cin >> s;
 
  char next = ' ';
 
  for (int i = 0; i < (int)s.size(); i++)
  {
    if (s[i] == 'Y' && (next == 'Y' || next == ' '))
    {
      next = 'e';
      continue;
    }
    if (s[i] == 'e' && (next == 'e' || next == ' '))
    {
      next = 's';
      continue;
    }
    if (s[i] == 's' && (next == 's' || next == ' '))
    {
      next = 'Y';
      continue;
    }
 
    cout << "NO" << endl;
    return;
  }
 
  cout << "YES" << endl;
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