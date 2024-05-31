#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        int l=-1,r=-1;
        int sum=0;
        for(int i=0;i<n;i++){
            int a;cin>>a;
            if(a%x!=0){
                if(l==-1) l=i;
                r=i;
            }
            sum+=a;
        }
        if(l==-1) cout<<-1<<endl;
        else if(sum%x!=0) cout<<n<<endl;
        else cout<<n-min(l+1,n-r)<<endl;
    }
    
    return 0;
}