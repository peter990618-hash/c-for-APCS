#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string m1;
ll b=-1;
ll ru(ll n1){
    b++;
    if (m1[b]=='1'){return n1*n1*1;}

    if (m1[b]=='0'){return 0;}
    
    if (m1[b]=='2'){return ru(n1/2)+ ru(n1/2)+ ru(n1/2)+ ru(n1/2);}
}
int main(){
    cin>>m1;
    ll n1;
    cin>>n1;
    cout<<ru(n1);
}