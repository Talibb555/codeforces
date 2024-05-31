#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,x;
    cin>>n>>k>>x;
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        pq.push(a);
    }
    while (k--)
    {
        int top=pq.top();
        pq.pop();
        if(top==0) {cout<<0<<endl;return 0;}
        top=max(top-x,0);
        pq.push(top);
    }
    int ans=0;
    while (pq.size())
    {
        ans+=pq.top();
        pq.pop();
    }
    cout<<ans<<endl;
    
    return 0;
}