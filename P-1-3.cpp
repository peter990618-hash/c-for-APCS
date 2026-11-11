#include<bits/stdc++.h>
using namespace std;
int n1[50010];
int cut(int lift,int right){
    if (right-lift<=1){return 0;}
    long long int len=n1[right]-n1[lift];
    int k=(n1[right]+n1[lift])/2;
    int m=lift;
    while (n1[m]<k){m++;}

    if (k-n1[m-1]<=n1[m]-k){m--;}
    return len+cut(lift,m)+cut(m,right);
    
}
int main(){
    int a,b;
    cin>>a>>b;
    
    n1[0]=0;n1[a+1]=b;
    for (int i = 1; i < a+1; i++){cin>>n1[i];}
    int y1=cut(0,a+1);
    cout<<y1;
    
}