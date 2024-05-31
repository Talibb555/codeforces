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
        if(n<=1) cout<<1<<" ";
        // if(n>=2) cout<<2<<" ";
        else if(n>1 && n%2==0){
            for (int i = 1; i <= n; i++)
            {
                if(1&i) cout<<i+1<<" ";
                else cout<<i-1<<" ";
            }
            
        }
        else if(n>1 && n%2!=0){
            cout<<1<<" ";
            for (int i = 1; i < n; i++)
            {
                if(1&i) cout<<i+1+1<<" ";
                else cout<<i-1+1<<" ";
            }
           
        }

        
        cout<<endl;
    }
    
    return 0;
}