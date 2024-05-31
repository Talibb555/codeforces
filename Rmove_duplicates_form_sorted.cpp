#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int k = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            k++;
            nums[i] = 1000;
        }
    }
    sort(nums.begin(), nums.end());
    // for(int i=0; i<nums.size();i++) cout<<nums[i]<<" ";
    // cout<<k;
    return nums.size()-k;
}

int main()
{
    vector<int> nums={0,0,1,1,1,2,2,3,3,4};
    cout<<removeDuplicates(nums)<<endl;
    for(auto i:nums) cout<<i<<" ";
    return 0;
}