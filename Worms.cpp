#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    int sum=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        sum+=a;
        v[i]=sum;
    }
    int m;
    cin>>m;
    while (m--)
    {
        int x;
        cin>>x;
        cout<<lower_bound(v.begin(),v.end(),x)-v.begin()+1<<endl;
    }
    
    return 0;
}