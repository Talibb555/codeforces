#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];

        vector<int> freq(10,0);
        for(int i=0;i<n;i++) freq[a[i]%10]++;
        bool ans=false;

        for(int i=0;i<=9;i++){
            for(int j=0;j<=9;j++){
                for(int k=0;k<=9;k++){
                    if((i+j+k)%10==3){
                        // cout<<i<<" "<<j<<" "<<k<<
                        if(i!=j && i!=k && j!=k){
                            if(freq[i] && freq[j] && freq[k]) {ans|=true;}
                        }
                        else if(i==j && j!=k){
                            if(freq[i]>1 && freq[k]) ans|=true;
                        }
                        else if(i==k && i!=j){
                            if(freq[i]>1 && freq[j]) ans|=true;
                        }
                        else if(k==j && j!=i){
                            if(freq[j]>1 && freq[i]) ans|=true;
                        }
                        else if(i==j && j==k){
                            if(freq[i]>2) ans|=true;
                        }
                    }
                }
            }
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}