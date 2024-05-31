#include <bits/stdc++.h>
using namespace std;

void f(int arr[], int n, int ind, vector<int> ds){
    if(ind==n){
        if(ds.size()==3) 
        {
            for(auto i:ds) cout<<i<<" ";
            cout<<endl;
        }
        return;
    }
    ds.push_back(arr[ind]);
    f(arr,n,ind+1,ds);
    ds.pop_back();
    f(arr,n,ind+1,ds);
}

void f1(int arr[], int n, int start, int end, int ind, vector<int> v, int r){
    if(ind==r){
        for(auto i:v) cout<<i<<" ";
        cout<<endl;
        return;
    }
    for (int i = start; i <= end && end-i>=r-ind; i++)
    {
        v.push_back(arr[i]);
        f1(arr,n,i+1,end,ind+1,v,r);
        v.pop_back();
        while (arr[i]==arr[i+1])
        {
            i++;
        }
        // if(arr[i]==arr[i+1]) continue;
        
    }
    
}

int main()
{
    int arr[]={1,2,1,1,3};
    int n=5;
    sort(arr,arr+n);
    vector<int> ds;
    // f(arr,n,0,ds);
    f1(arr,n,0,n,0,ds,3);
    return 0;
}