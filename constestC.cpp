#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans=0;
        for (int k = 1; k <= n; k++)
        {
            multiset<int> st(a.begin(),a.end());
            for (int i = 0; i < k; i++)
            {
                auto it=st.upper_bound(k-i);
                if(it==st.begin())break;
                st.erase(--it);
                if(!st.empty()){
                    int x=*st.begin();
                    st.erase(st.begin());
                    st.insert(x+k-i);
                }
            }
            if(st.size()+k==n) ans=k;
            
        }
        cout<<ans<<endl;
        
        // int k = n;
        // for (int k = n; k >= 1; k--)
        // {
        //     int j = 1;
        //     int flag = 0;
        //     for (int l = k; l >= 0; l--)
        //     {
                
        //         sort(a.begin(), a.end());
        //         for (int i = a.size() - 1; i >= 0; i--)
        //         {
        //             if (a[i] <= k - j + 1)
        //             {
                       
        //                 a[0] += k-j+1;
        //                 a.erase(a.begin() + i);
        //                 flag = 1;
        //                 j++;
        //                 break;
        //             }

        //         }
        //         if (!flag) break;
        //         // else break;
        //         if(a.size()==0) ans=k;
            
        //     }
        // }

        // cout<<ans<<endl;
    }

    return 0;
}