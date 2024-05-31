#include <bits/stdc++.h>
using namespace std;

int determination (int mat[3][3]){
    int ans=mat[0][0]*(mat[1][1]*mat[2][2]-mat[1][2]*mat[2][1])
            -mat[0][1]*(mat[1][0]*mat[2][2]-mat[1][2]*mat[2][0])
            +mat[0][2]*(mat[1][0]*mat[2][1]-mat[1][1]*mat[2][0]);
    return ans;
}

void soln(int c[3][4], int a[3][3]){
    // vector<int> a(3);
    int d[3][3]={
        {c[0][0], c[0][1], c[0][2]},
        {c[1][0], c[1][1], c[1][2]},
        {c[2][0], c[2][1], c[2][2]},
    };
    int d1[3][3]={
        {c[0][3], c[0][1], c[0][2]},
        {c[1][3], c[1][1], c[1][2]},
        {c[2][3], c[2][1], c[2][2]},
    };
    int d2[3][3]={
        {c[0][0], c[0][3], c[0][2]},
        {c[1][0], c[1][3], c[1][2]},
        {c[2][0], c[2][3], c[2][2]},
    };
    int d3[3][3]={
        {c[0][0], c[0][1], c[0][3]},
        {c[1][0], c[1][1], c[1][3]},
        {c[2][0], c[2][1], c[2][3]},
    };
    int D=determination(d);
    int D1=determination(d1);
    int D2=determination(d2);
    int D3=determination(d3);
    a[0][0]=D1/D, a[1][1]=D2/D, a[2][2]=D3/D;
    // cout<<x<<" "<<y<<" "<<z<<endl;
    // return a;
}

int main()
{
    int a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>a[i][j];
        }
    }
    // int x=a[0][0]+a[0][1]+a[0][2];
    // int y=a[1][0]+a[1][1]+a[1][2];
    // int z=a[2][0]+a[2][1]+a[2][2];

    int c[3][4]={
        {1, 1, 0, a[0][2]+a[1][2]},
        {1, 0, 1, a[0][1]+a[2][1]},
        {0, 1, 1, a[1][0]+a[2][0]},
    };
    int x,y,z;
    soln(c,a);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}