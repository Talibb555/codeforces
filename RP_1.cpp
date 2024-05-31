#include <bits/stdc++.h>
using namespace std;

void f(vector<int> &v, int k, int ind)
{
    if (v.size() == 1)
    {
        // cout << v[0] << endl;
        return;
    }
    // cout<<v[(k+ind)%v.size()]<<endl;
    ind+=k;
    ind%=v.size();
    v.erase(v.begin()+ind);
    // cout<<v[(k+ind)%v.size()]<<endl;
    // cout<<v[ind]<<endl;
    // for(auto i:v) cout<<i<<" ";
    // cout<<endl;
    f(v,k,(ind));
    // return;
}
void solve(int ind, vector<int> &v, int k){
        if(v.size()==1){
            // cout<<v[0]<<endl;
            return;
        }
        ind+=k;
        ind%=v.size();
        v.erase(v.begin()+ind);
        for(auto i:v) cout<<i<<" ";
        cout<<endl;
        solve(ind,v,k);
    }
    int findTheWinner(int n, int k) {
        vector<int> v;
        for(int i=0; i<n; i++) v.push_back(i+1);
        v.push_back(n);
        k--;
        f(v,0,k);
        return v[0];
    }

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int k = 2;
    k--;
    // f(v,k,0);
    cout<<findTheWinner(v.size(),k);
    // v.erase(v.begin()+1);
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    
    return 0;
}