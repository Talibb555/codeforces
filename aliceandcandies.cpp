// #include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool isvalid(int a, int b){
	int n1=(a-b)/2;
	int n2=(a+b)/2;
	if(n1>=0 && n2>=0 && n2>=n1) return true;
	return false;
}

int main() {
	int n;
	cin>>n;
	int ans=0;
	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			int a=i,b=n/i;
			if((a%2==0&&b%2==0) || (a%2==1 && b%2==1)){
				if(isvalid(a,b)) ans++;
				if(i*i!=n && isvalid(b,a)) ans++;
			}
		}
	}
	cout<<ans<<endl;
    return 0;
}