#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum, limit;
    cin >> sum >> limit;
    map<int,vector<int>> m;
    int totalsum=0;
    for (int i = 1; i <= limit; i++)
    {
        bitset<32> num=i;
        for (int j = 0; j < 32; j++)
        {
            if(num[j]==1){
                int x=1<<j;
                m[-1*x].push_back(i);
                totalsum+=x;
                break;
            }
        }
        
    }
    vector<int> ans;
    if(totalsum<sum) cout<<-1<<endl;
    else
    {
        for(auto i:m)
        {
            for(auto j:i.second)
            {
                if(sum>=-i.first)
                {
                    sum+=i.first;
                    ans.push_back(j);
                }
                else break;
            }
        }
        cout<<ans.size()<<endl;
        for(auto i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    // for(auto i:m){
    //     cout<<i.first<<endl;
    //     for (int j = 0; j < i.second.size(); j++)
    //     {
    //         cout<<i.second[j]<<" ";
    //     }
    //     cout<<endl;
    // }

    

    return 0;
}