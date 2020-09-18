#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, n) for (int i = 1; i <= (int)(n); i++)
#define ll long long
#define umap unordered_map
using graph = vector<vector<int>>;
using graph2 = vector<vector<pair<int, int>>>;

ll mod(ll x, ll y){if(x>=0||x%y==0) return x%y;return y+x%y;} //mod including minus
ll dv0(ll x, ll y){if(x>=0||x%y==0)return x/y;return x/y-1;} //rnd down
ll dv1(ll x, ll y){if(x%y==0) return dv0(x,y);return dv0(x,y)+1;} //rnd up

bool isprime(ll x){
    if(x==1)return false;
    if(x==2)return true;
    if(x%2==0)return false;
    for(ll i=2;i*i<=x;i++){if(x%i==0)return false;}
    return true;
}
ll eulerphi(ll x){
    ll a=x;
    for(ll i=1;i*i<=x;i++){
        if(x%i==0){
            if(isprime(i))a=a*(i-1)/(i);
            if(i*i!=x){
                if(isprime(x/i))a=a*(x/i-1)/(x/i);
            }
        }
    }
    return a;
}

//Start from Here