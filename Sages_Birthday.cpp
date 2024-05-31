/* Today is Sage's birthday, and she will go shopping to buy ice spheres. All n
 ice spheres are placed in a row and they are numbered from 1
 to n
 from left to right. Each ice sphere has a positive integer price. In this version, some prices can be equal.

An ice sphere is cheap if it costs strictly less than two neighboring ice spheres: the nearest to the left and the nearest to the right. 
The leftmost and the rightmost ice spheres are not cheap. Sage will choose all cheap ice spheres and then buy only them.

You can visit the shop before Sage and reorder the ice spheres as you wish. Find out the maximum number of ice spheres that Sage can buy, 
and show how the ice spheres should be reordered.

Input
The first line contains a single integer n
 (1≤n≤105)
 — the number of ice spheres in the shop.

The second line contains n
 integers a1,a2,…,an
 (1≤ai≤109)
 — the prices of ice spheres.

Output
In the first line print the maximum number of ice spheres that Sage can buy.

In the second line print the prices of ice spheres in the optimal order. If there are several correct answers, you can print any of them.*/

#include <bits/stdc++.h>
using namespace std;

bool f(int mid, vector<int> &v){
    int req=mid+1;
    int cur=upper_bound(v.begin(),v.end(),v[mid-1])-v.begin();
    // cout<<mid<<" "<<v.size()-cur<<endl;
    return req<=v.size()-cur;
}

int main()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    sort(v.begin(),v.end());
    int lo=0,hi=n;
    int ans=-1;
    vector<int> a(n,0);

    while (lo<hi)
    {
        int mid=lo+(hi-lo)/2;
        if(f(mid,v)){
            lo=mid+1;
            ans=mid;
            int k=0;
            for(int i=1;i<n;i+=2){
                a[i]=v[k];
                k++;
                if(k==mid) break;
            }
            for(int i=0;i<n;i++){
                if(a[i]!=0) continue;
                
            }
        }
        else{
            hi=mid;
        }
    }
    cout<<ans<<endl;

    return 0;
}