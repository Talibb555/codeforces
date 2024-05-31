// #include <iostream>
// #include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<long long> quasibinaryNumbers;

// Function to generate quasibinary numbers
void generateQuasibinary(long long num, long long current, int position) {
    if (current > 0 && current < num) {
        quasibinaryNumbers.push_back(current);
    }

    if (position >= 7 || current >= num) {
        return;
    }

    generateQuasibinary(num, current * 10, position + 1);
    if (position == 0 || current % 10 == 1) {
        generateQuasibinary(num, current * 10 + 1, position + 1);
    }
}

int main() {
    // long long limit = 1000000;

    // generateQuasibinary(limit, 0, 0);

    // cout << "Quasibinary numbers less than 1,000,000:" << endl;
    // for (long long num : quasibinaryNumbers) {
    //     cout << num << " ";
    // }
    // cout << endl;

    int k;cin>>k;
    vector<int> a;
    while (k)
    {
        int n=k,p=1,m=0;
        while (n)
        {
            if(n%10) m+=p;
            n/=10;p*=10;
        }
        a.push_back(m);
        k-=m;
    }
    sort(a.begin(),a.end());
    cout<<a.size()<<endl;
    for(auto i:a) cout<<i<<" ";
    cout<<endl;


    return 0;
}
