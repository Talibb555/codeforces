#include <bits/stdc++.h>
using namespace std;

vector<int> ans;
int len=0;

void solve(vector<int> v, int ind, vector<int> ds, int target)
{
    if (ind == v.size())
    {
        if (target == 0)
        {
            // for (auto i : ds)
            //     cout << i << " ";
            //     cout<<endl;
            // cout<<ds.size()<<endl;
            if(ds.size()>len){
                len=ds.size();
                ans=ds;
            }
        }
        return;
    }
    if(v[ind]<=target){
        ds.push_back(v[ind]);
        solve(v,ind+1,ds,target-v[ind]);
        ds.pop_back();
    }
    solve(v,ind+1,ds,target);
}

void f(int n, vector<int>ds, int i){
    if(i>=n){
        // ds.pop_back();
        // i+=2;
        // n-=i;
        // cout<<i<<" "<<n<<endl;
        // ds.push_back(i);
        // ds[ds.size()-1]+=i;
        for(auto i:ds) cout<<i<<" ";
        cout<<endl;
        return;
    }
    ds.push_back(i);
    cout<<i<<" "<<n<<endl; 
    f(n-i,ds,i+2);
}

bool f1(int n, vector<int>ds,int currsum, int ind){
    if(currsum==0) return true;
    if(currsum<0) return false;
    for (int i = ind; i <= n; i+=2)
    {
        ds.push_back(i);
        if(f1(n,ds,currsum-i,i+2)) return true;
        ds.pop_back();
    }
    return false;
}

int main()
{
    vector<int> v;
    int n ;
    cin>>n;
    for (int i = 2; i < 28; i += 2)
    {
        v.push_back(i);
    }
    vector<int> ds;
    // solve(v,0,ds,n);
    // cout<<len<<endl;
    // for(auto i:ans) cout<<i<<" ";
    f(n,ds,2);
    return 0;
}