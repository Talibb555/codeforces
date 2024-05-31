#include <bits/stdc++.h>
using namespace std;

const int N=1e6+10;
vector<int> prime(N,1);

void is_prime(){
    prime[0]=prime[1]=0;
    for(int i=2;i*i<N;i++){
        if(prime[i]==false) continue;
        for(int j=i+i;j<N;j+=i) prime[j]=false;
    }
}

vector<int> generateprimes(int n){
    vector<int> ds;
    for(int i=2;i<=n;i++){
        if(prime[i]) ds.push_back(i);
    }
    return ds;
}

int main()
{
    is_prime();
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> primes=generateprimes(sqrt(m));
        vector<int> dummy(m-n+1,1);
        for(auto pr:primes){
            int firstMultiple=(n/pr)*pr;
            if(firstMultiple<n) firstMultiple+=pr;
            for(int j=max(firstMultiple,pr*pr);j<=m;j+=pr){
                dummy[j-n]=0;
            }
        }
        for(int i=n;i<=m;i++){
            if(i==0 || i==1) continue;
            if(dummy[i-n] && i%100==1) cout<<i<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}