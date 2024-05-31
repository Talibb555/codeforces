#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        int mx=n, mn=1;
        int i=0,j=n-1;

        while(i<j){
            if(a[i]==mx){
                mx--;
                i++;
                continue;
            }
            if(a[i]==mn){
                mn++;
                i++;
                continue;
            }
            if(a[j]==mx){
                mx--;
                j--;
                continue;
            }
            if(a[j]==mn){
                mn++;
                j--;
                continue;
            }
            break;
        }    
        if(i<j){
            cout<<i+1<<" "<<j+1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
       
    return 0;
}