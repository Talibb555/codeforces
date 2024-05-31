#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v;
    cin>>v;
    int a[9];
    int mn=INT_MAX;
    int ind=-1;
    vector<pair<int,int>> vec;
    for (int i = 0; i < 9; i++)
    {
        cin>>a[i];
        // if(a[i]<=v && a[i]<=mn){
        //     mn=a[i];
        //     ind=i+1;
        // }
        if(a[i]<=v){
            vec.push_back({a[i],i+1});
        }
    }
    // if(mn==INT_MAX){
    //     cout<<-1<<endl;
    //     return 0;
    // }
    // while (v>0)
    // {
    //     cout<<ind;
    //     v=v-mn;
    // }
    vector<int> ans;
    sort(vec.begin(),vec.end());
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }
    int len=v/vec[0].first;
    int rem=v%vec[0].first;
    int j=vec.size()-1;
    cout<<len;
    if(v%vec[0].first==0){
        while (len--)
        {
            // cout<<vec[0].second;
            ans.push_back(vec[0].second);
        }
        
    }
    else
    {
        for (int i = vec.size()-1; i >=0 ; i--)
        {
            while (vec[i].first<=v && len>0)
            {
                // cout<<vec[i].second;
                ans.push_back(vec[i].second);
                v=v-vec[i].first;
                len--;
            }
        }
        
        
    }
    sort(ans.begin(),ans.end());
    for (int i = ans.size()-1; i >=0; i--)
    {
        cout<<ans[i];
    }
    
    

    
    return 0;
}