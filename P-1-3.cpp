#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n1[50010];
ll cut(ll lift,ll right){
    if (right-lift<=1){return 0;}
    ll  len=n1[right]-n1[lift];

    ll k=(n1[right]+n1[lift])/2;

    ll m=lower_bound(n1+lift,n1+right,k)-n1;
    
    if (k-n1[m-1]<=n1[m]-k){m--;}
    return len+cut(lift,m)+cut(m,right);
    
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    ll a,b;
    cin>>a>>b;
    n1[0]=0;n1[a+1]=b;
    for (int i = 1; i < a+1; i++){cin>>n1[i];}
    ll  y1=cut(0,a+1);
    cout<<y1;
    
}
