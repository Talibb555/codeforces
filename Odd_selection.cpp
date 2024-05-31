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
        int odd=0,even=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a&1) odd++;
            else even++;
        }
        if(x&1){
            if(odd>=x) cout<<"Yes"<<endl;
            else{
                if(odd&1 and even>=x-odd) cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
        }
        else{
            if(odd>=x-1){
                if(even) cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
            else{
                if(odd&1 and even>=x-odd) cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
        }
    }
    
    return 0;
}