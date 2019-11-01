#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
using namespace std;
ll n;
ll p=9;
int main() {
    IOS
    cin>>n;
    int digit=1;
    ll sum=0;
    while(n>0){
        if(n>=p){
         sum+=(digit*p);
        }else{
            sum+=(digit*n);
        }
        digit++;
        n-=p;
        p*=10;
         }
    cout<<sum<<endl;
    return 0;
}