// #include <bits/stdc++.h>
// using namespace std;

// int rec(int ind, int sign, vector<int>& v){
//     if(ind==v.size()) return 0;
//     int take=0;
//     if(sign==1 && v[ind]<0) take=1+rec(ind+1,0,v);
//     if(sign==0 && v[ind]>0) take=1+rec(ind+1,1,v);
//     int not_take=rec(ind+1,sign,v);
//     return max(take,not_take);
// }

// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         vector<int> v(n);
//         for(int i=0;i<n;i++) cin>>v[i];
//         cout<<max(rec(0,1,v),rec(0,0,v))<<endl;
//     }
    
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int sign(int x){
    if(x>0) return 1;
    return -1;
}

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
        long long sum=0;
        for(int i=0;i<n;i++){
            int j=i;
            int cur=v[i];
            while (j<n && sign(v[i])==sign(v[j]))
            {
                cur=max(cur,v[j]);
                j++;
            }
            sum+=cur;
            i=j-1;
        }
        cout<<sum<<endl;
    }
    return 0;
}