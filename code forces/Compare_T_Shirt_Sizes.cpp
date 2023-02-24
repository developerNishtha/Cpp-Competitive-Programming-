#include <bits/stdc++.h>
using namespace std;

 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
    string a,b;
    cin>>a>>b;
     int count_a=0;
     int count_b=0;
     int o=a.size();
     int p=b.size();
     for(int i=0;i<o-1;i++)
     {
         if(a[i]=='X')
         {
             count_a++;
         }
     }
     for(int i=0;i<o-1;i++)
     {
          if(b[i]=='X')
         {
             count_b++;
         }
     }
     if(a[o-1]==b[p-1] && count_a==count_b){
        cout << "=" << endl;
     }
     
       else if(a[o-1]=='M')
    {
     
          if(count_a>count_b)
         {
             cout<<">"<<endl;
         } 
         else if(b[p-1]=='L')
         {
         cout<<"<"<<endl;
         }
         
         else if(count_a<count_b)
         {
            cout<<"<"<<endl; 
         }
         else if(b[p-1]=='S')
         {
             cout<<">"<<endl;
         }
        
    }
    else if(a[o-1]=='S')
     {
        
        if(count_a>count_b)
         {
             cout<<"<"<<endl;
         }
         else if(b[p-1]!='S')
         {
         cout<<"<"<<endl;
         }
         else if(count_a<count_b)
         {
             cout<<">"<<endl;
         }
         
    }
    else if(a[o-1]=='L')
    {
    
          if(count_a>count_b)
         {
             cout<<">"<<endl;
         }
          else if(b[p-1]!='L')
         {
         cout<<">"<<endl;
         }
         else if(count_a<count_b)
         {
             cout<<"<"<<endl;
         } 
        
    }
   
	}
	return 0;
}