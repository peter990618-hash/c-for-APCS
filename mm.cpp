#include<bits/stdc++.h>
using namespace std;
int add (){
    string fun;
    cin>>fun;
    if (fun[0]=='f'){return 2*add()-1;}
    if (fun[0]=='g'){return add()+2*add()-3;}
    return int(fun[0])-'0';
}
int main(){
    cout<<add();
}