#include <bits/stdc++.h>
using namespace std;

void f1(int n, bool flag, int m)
{
    // int x=n;
    cout << m << " ";
    if (m == n && !flag)
        return;
    // x=n;
    if (flag)
    {
        if (m-5 > 0) f1(n, true, m - 5);
        else f1(n, false, m - 5);
    }
    else f1(n, false, m + 5);

}

void f2(int a[], int n, int ind, vector<int> ds, int target){
    if(ind==n){
        if(target==0){
            for(auto i:ds) cout<<i<<" ";
            cout<<endl; 
        }
        return;
    }
    if(a[ind]<=target){
        ds.push_back(a[ind]);
        f2(a,n,ind,ds,target-a[ind]);
        ds.pop_back();
    }
    f2(a,n,ind+1,ds,target);
}

void f3(string out, int n, int start){
    if(n==0){
        cout<<out<<" ";
        return;
    }
    for (int i = 0; i <=9; i++)
    {
        string s=out+to_string(i);
        f3(s,n-1,i+1);
    }
    
}

void f4(int a[], int n, int sum, int ind){
    if(ind==n){
        cout<<sum<<endl;
        return;
    }
    sum+=a[ind];
    f4(a,n,sum,ind+1);
    sum-=a[ind];
    f4(a,n,sum,ind+1);
}
int ct=0;
int power(int num, unsigned int n)
{
    if (n == 0)
        return 1;
    else if (n % 2 == 0)
        return power(num, n / 2) * power(num, n / 2);
    else
        return num * power(num, n / 2) * power(num, n / 2);
}
void f5(vector<int> v, int ind, int sum, vector<int> ds){
    // if(ind==n){
    if(sum==0)
    { 
        // for(auto i:ds) cout<<i<<" ";
        // cout<<endl;
        ct++;
        return;
    }
    // }
    for (int i = ind; i < v.size(); i++)
    {
        if(i!=ind && v[i]==v[i-1])continue;
        if(v[i]>sum) break;
        ds.push_back(v[i]);
        f5(v,i+1,sum-v[i],ds);
        ds.pop_back();
    }
    
}
int string_to_Binary(string s){
    reverse(s.begin(),s.end());
    int sum=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='1') sum+=pow(2,i);
    }
    return sum;
}
void f6(string s, int k, int n){
    if(n==k){
        // cout<<s<<endl;
        cout<<string_to_Binary(s)<<endl;
        return;
    }
    if(s[n-1]=='0'){
        s.push_back('1');
        f6(s,k,n+1);
        s.pop_back();
        s.push_back('0');
        f6(s,k,n+1);
        s.pop_back();
    }
    else
    {
        s.push_back('0');
        f6(s,k,n+1);
        s.pop_back();
    }
    
}
void f7(string s, int k, int n, int remaining_ones){
    if(n==k){
        cout<<s<<endl;
        return ;
    }
    s.push_back('1');
    f7(s,k,n+1,remaining_ones+1);
    s.pop_back();
    if(remaining_ones>0) {
        s.push_back('0');
    f7(s,k,n+1,remaining_ones-1);
    s.pop_back();
    }
}

void f8(string s, string t, int ind, int len){
    if(0==len){
        cout<<s<<endl;
        return;
    }
    for (int i = 0; i < t.length(); i++)
    {
        s.push_back(t[i]);
        f8(s,t,ind+1,len-1);
        s.pop_back();
    }
    
}

void f9(int a[], int n, int ind){
    if(ind==n){
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
        return ;
    }
    for (int i = ind; i < n; i++)
    {
        swap(a[i],a[ind]);
        f9(a,n,ind+1);
        swap(a[i],a[ind]);
    } 
}

int f10(int n, int val, vector<int> ds){
    int ct=0;
    if(n==1 && val>=0){ 
        // for(auto i:ds) cout<<i<<" ";
        // cout<<endl;
        return 1;
    }
    for (int i = 0; i <= val; i++)
    {
        // ds.push_back(i);
        ct+=f10(n-1,val-i, ds);
        // ds.pop_back();
    }
    return ct;
}

void f(int ind, int target, vector<int> &ar, vector<int> ds, int n){
        if(ind==n){
            if(target==0){
                for(auto i:ds) cout<<i<<" ";
                cout<<endl;
                // ans.push_back(ds);
                
            }
            return;
        }
        if(ar[ind]<=target){
            ds.push_back(ar[ind]);
            target+=ar[ind];
            f(ind,target,ar,ds,n);
            target-=ar[ind];
            ds.pop_back();
        }
        f(ind+1,target,ar,ds,n);
}
int main()
{
    // int n=3;
    // int arr[n]={2,4,5};
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i]=i+1;
    // }
    vector<int> ds;
    // f1(16, true, 16);
    // f2(arr,n,0,ds,n);
    // f3("",2,0);
    // f4(arr,n,0,0);
    // int x=100;
    // int arr[x];
    // int k=2;
    // for (int i = 0; i < x; i++)
    // {
    //     arr[i]=power(i+1,k);
    // }
    // for (int i = 0; i < x; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // vector<int > v;
    // int i=1;
    // int j=1;
    // while (i<=x)
    // {
    //     v.push_back(i);
        
    //     j++;
    //     i=power(j,k);
    // }
    // for(auto i:v) cout<<i<<" ";
    
    // f5(v,0,x,ds);
    // cout<<ct<<endl;
    // string s;
    // int k=4;
    // f7("",k,0,0);
    // f6("0",k,1);
    // string t="abc";
    // string s;
    // for (int i = 0; i <= t.length(); i++)
    // {
    //     f8(s,t,0,i);
    // }
    // int n=3;
    // int arr[n];
    // for(int i=0;i<n;i++) arr[i]=i+1;
    // f9(arr,n,0);
    // cout<<f10(5,20,ds);
    vector<int> ar={2,3,6,7};
    int n=4;
    int target=7;
    f(0,target,ar,ds,n);
    

    return 0;
}