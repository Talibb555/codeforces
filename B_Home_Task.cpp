#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int f=0;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]==0) f=1;
        sum+=a[i];
    }
    // int sum = accumulate(a, a + n, 0);
    // cout << sum << endl;
    int rem = sum % 3;
    sort(a, a + n);
    int flag = 0;
    if(f==0){
        cout<<-1<<endl;
        return 0;
    }
    if (rem == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 3 == 1 && a[i]!=0)
            {
                a[i] = -1;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 3 == 2 && a[i]!=0)
                {
                    a[i] = -1;
                    flag++;
                }
                if(flag==2) break;
            }
        }
    }
    if (rem == 2)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 3 == 2 && a[i]!=0)
            {
                a[i] = -1;
                flag=1;
                break;
            }
        }
        if (flag == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 3 == 1 && a[i]!=0)
                {
                    a[i] = -1;
                    flag++;
                }
                if(flag==2) break;
            }
        }
    }
    if(sum==0) {cout<<0<<endl;return 0;}
    if(flag==0){
        cout<<-1<<endl;
        return 0;
    }
    int f1=0;
    int s1=0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] != -1 && a[i]!=0){
            f1=1;
            // cout << a[i];
        }
        if(f1==1 && a[i]!=-1) cout<<a[i], s1++;
    }
    if(s1==0) cout<<0<<endl;
    return 0;
}