#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,k;
ll n1[500];
ll sigmai[500];
ll sigmam[500];
ll A,B;
long long int cut(int lift,int right,int f){
    if (f>=k){return 0;}
    if (right-lift+1<3){return 0;}
    ll  mini=1000000;
    ll m=-1;
    A=sigmai[right]-sigmai[lift-1];
    B=sigmam[right]-sigmam[lift-1];
    for (int i = lift+1; i < right; i++)
    {
        if (abs(A-i*B)<mini) {mini=abs(A-i*B);m=i;}
    }
    f++;
    return n1[m]+cut(lift,m-1,f)+cut(m+1,right,f);
}

int main(){
    cin>>n>>k;
    for (int i = 1; i < n; i++)
    {
        cin>>n1[i];
    }
    sigmai[0]=0;
    for (int i = 1; i <= n; i++){
        sigmai[i]=sigmai[i-1]+n1[i]*(i);
        }
    sigmam[0]=0;
    for (int i = 1; i <= n; i++){
        sigmam[i]=sigmam[i-1]+n1[i]; 
        }


    cout<<cut(1,n,0);
}