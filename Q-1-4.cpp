
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,k;
ll n1[50005];
ll sigmai[50005];
ll sigmam[50005];

ll cut(int l,int r,int f){
    if (f>=k) return 0;
    if (r-l+1<3) return 0;
    int m = -1;
    ll mn = 1e18;

    ll A = sigmai[r]-sigmai[l-1];
    ll B = sigmam[r]-sigmam[l-1];

    for (int i = l+1; i<r; i++){
        ll sum = abs(A-i*B);
        if(sum<mn){
            m = i;
            mn = sum;
        }
    }
    return n1[m]+cut(l,m-1,f+1)+cut(m+1,r,f+1);
}

int main(){
    cin>>n>>k;
    for (int i = 1; i <= n; i++) cin>>n1[i];

    for (int i = 1; i <= n; i++) sigmai[i]=sigmai[i-1]+n1[i]*(i);
    for (int i = 1; i <= n; i++) sigmam[i]=sigmam[i-1]+n1[i];

    cout<<cut(1,n,0) << '\n';
}