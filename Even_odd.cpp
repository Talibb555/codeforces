#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.rbegin(),v.rend());
        long long sum=0;
        int turn=1;
        for(auto i:v){
            if(turn){
                if(i%2==0) sum+=i;
            }
            else{
                if(i&1) sum-=i;
            }
            turn=!turn;
        }
        if(sum>0) cout<<"Alice"<<endl;
        else if(sum<0) cout<<"Bob"<<endl;
        else cout<<"Tie"<<endl;
    }
    
    return 0;
}