#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    cin>>t;
    while (t--)
    {
        int n,x,p;
        cin>>n>>x>>p;
        int target=n-x;
        // vector<int> a;
        int i=1;
        int sum=0;
        int f=0;
        // int ind=1;
        while(i<=min(2*n,p)){
            sum+=i;
            sum=sum%n;
            // a.push_back(sum);
            if(sum==target || sum==(target+n)%n) f=1;
            i++;
            // ind++;
        }
        // for(auto i:a) cout<<i<<" ";
        if(f==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}