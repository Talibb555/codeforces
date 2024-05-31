#include <bits/stdc++.h>
using namespace std;

void print(int a, int n)
{
    if (a == 0)
    {
        cout << n;
        return;
    }
    print(a - 1, n + a);
}
int f(int a)
{
    if (a == 0) return 1;
    return a * f(a - 1);
}
void reverse(int i, int arr[], int n)
{
    if (i >= n / 2) return;
    swap(arr[i], arr[n - i - 1]);
    reverse(i + 1, arr, n);
}
bool palindrome(int i, string &s)
{
    if (i >= s.size() / 2) return true;
    if (s[i] != s[s.size() - i - 1]) return false;
    swap(s[i], s[s.size() - i - 1]);
    return palindrome(i + 1, s);
}
int fib(int n)
{
    if(n<=1) return n;
    int last=fib(n-1);
    int slast=fib(n-2);
    cout<<n<<": "<<last<<" "<<slast<<endl;
    return last+slast;
}
void subsequence(int ind, vector<int> &ds, int arr[], int n)
{
    if(ind==n){
        for (int i = 0; i < ds.size(); i++)
        {
            cout<<ds[i]<<" ";
        }
        if(ds.size()==0) cout<<"{}";
        cout<<endl;
        return;
    }
    subsequence(ind+1, ds, arr, n);
    ds.push_back(arr[ind]);
    subsequence(ind+1,ds,arr,n);
    ds.pop_back();
}
void subsequence_sum_k(int ind, vector<int> &ds, int arr[], int n, int sum, int k)
{
    if(ind==n)
    {
        if(sum==k)
        {
            for(auto i:ds) cout<<i<<" ";
            cout<<endl;   
        }
        return;
    }
    subsequence_sum_k(ind+1, ds,arr, n, sum, k);
    ds.push_back(arr[ind]);
    sum+=arr[ind];
    subsequence_sum_k(ind+1, ds,arr, n, sum, k);
    sum-=arr[ind];
    ds.pop_back();
}
bool subsequence_sum_k_only1(int ind, vector<int> &ds, int arr[], int n, int sum, int k)
{
    if(ind==n)
    {
        if(sum==k)
        {
            for(auto i:ds) cout<<i<<" ";
            cout<<endl; 
            return true;  
        }
        return false;
    }
    if(subsequence_sum_k_only1(ind+1, ds,arr, n, sum, k)) return true;
    ds.push_back(arr[ind]);
    sum+=arr[ind];
    if(subsequence_sum_k_only1(ind+1, ds,arr, n, sum, k)) return true;
    sum-=arr[ind];
    ds.pop_back();
    return false;
}
int subsequence_sum_count(int ind, int arr[], int n, int sum, int k)
{
    if(ind==n)
    {
        if(sum==k) return 1;
        return 0;
    }
    int l=(subsequence_sum_count(ind+1,arr, n, sum, k));
    // ds.push_back(arr[ind]);
    sum+=arr[ind];
    int r=(subsequence_sum_count(ind+1,arr, n, sum, k));
    sum-=arr[ind];
    // ds.pop_back();
    return l+r;
}
void combination_sum_1(int ind, int target, vector<int> &ds, int arr[], int n)
{
    if(n==ind)
    {
        if(target==0){
            for(auto i:ds) cout<<i<<" ";
            cout<<endl;
        }
        return;
    }
    if(target>=arr[ind])
    {
        target-=arr[ind];
        ds.push_back(arr[ind]);
        combination_sum_1(ind,target,ds,arr,n);
        target+=arr[ind];
        ds.pop_back();
    }
    combination_sum_1(ind+1,target,ds,arr,n);
}
set<vector<int>> s;
void combination_sum_2_brute(int ind, int target, vector<int> &ds, int arr[], int n)
{
    if(n==ind)
    {
        if(target==0){
            // for(auto i:ds) cout<<i<<" ";
            s.insert(ds);
            // cout<<endl;
        }
        return;
    }
    if(target>=arr[ind])
    {
        target-=arr[ind];
        ds.push_back(arr[ind]);
        combination_sum_2_brute(ind+1,target,ds,arr,n);
        target+=arr[ind];
        ds.pop_back();
    }
    combination_sum_2_brute(ind+1,target,ds,arr,n);
}
void combination_sum_2(int ind, int target, vector<int> &ds, int arr[], int n)
{
    if(target==0){
        for(auto i:ds) cout<<i<<" ";
        cout<<endl;
        return;
    }
    for (int i = ind; i < n; i++)
    {
        if(i>ind && arr[i-1]==arr[i]) continue;
        if(target<arr[i]) break;
        ds.push_back(arr[i]);
        combination_sum_2(i+1, target-arr[i], ds, arr, n);
        ds.pop_back();
    }
    
}
void subset_sum(int ind, int sum, vector<int> &ds, int arr[], int n)
{
    if(ind==n){
        ds.push_back(sum);
        return;
    }
    subset_sum(ind+1,sum,ds,arr,n);
    subset_sum(ind+1,sum+arr[ind],ds,arr,n);
}
void subset_sum2(int ind, vector<int> &ds, int arr[], int n)
{
    if(ind==n)
    {
        for(auto i:ds) cout<<i<<" ";
        cout<<endl;
        return;
    }
    for (int i = ind; i < n; i++)
    {
        if(i!=ind && arr[i]==arr[i-1]) continue;
        ds.push_back(arr[i]);
        subset_sum2(i+1,ds,arr,n);
        ds.pop_back();
    }
    
}
void permutations(vector<int> &ds, int arr[], int n, int freq[])
{
    if(ds.size()==n)
    {
        for(auto i:ds) cout<<i<<" ";
        cout<<endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if(!freq[i]){
            ds.push_back(arr[i]);
            freq[i]=1;
            permutations(ds,arr,n,freq);
            freq[i]=0;
            ds.pop_back();
        }
    }
    
}
void permutations2(int ind, int arr[], int n)
{
    if(ind==n)
    {
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return ;
    }
    for (int i = ind; i < n; i++)
    {
        swap(arr[ind],arr[i]);
        permutations2(ind+1,arr,n);
        swap(arr[ind],arr[i]);
    }
    
}

int main()
{
    // int n;
    // cin >> n;
    // int sum=0;
    // print(n, 0);
    // cout<<f(4);
    // int arr[5]={1,2,3,4,5};
    // reverse(0,arr,5);
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // string s = "abcb";
    // cout << palindrome(0, s);
    // cout<<fib(10);
    int arr[]={1,2,3};
    int n=3;
    // int k=2;
    int target=4;
    vector<int> ds;
    // subsequence(0,ds,arr,n);
    // subsequence_sum_k(0,ds,arr,n,0,k);
    // subsequence_sum_k_only1(0,ds,arr,n,0,k);
    // cout<<subsequence_sum_count(0,arr,n,0,k);
    // combination_sum_1(0,target,ds,arr,n);
    // combination_sum_2_brute(0,target,ds,arr,n);
    // for(auto i: s){
    //     for(auto j:i) cout<<j<<" ";
    //     cout<<endl;
    // }
    // combination_sum_2(0,4,ds,arr,n);
    // subset_sum(0,0,ds,arr,n);
    // sort(ds.begin(),ds.end());
    // for (int i = 0; i < ds.size(); i++)
    // {
    //     cout<<ds[i]<<" ";
    // }
    // subset_sum2(0,ds,arr,n);
    // int freq[n]={0};
    // permutations(ds,arr,n,freq);
    permutations2(0,arr,n);


    return 0;
}