#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    vector<int> nums;
    int target;
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }
    cin >> target;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 1; j < nums.size(); j++)
        {
            if (i == j)
            {
                j++;
            }
            if (i > j)
                continue;
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
        break;
    }
    for (int i = 0; i <ans.size() ; i++)
    {
        cout<<ans[i]<<endl;
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