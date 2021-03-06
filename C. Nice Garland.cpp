/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define el '\n'
#define x first
#define y second
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, ans=(ll)(1e19);
    vector<ll> permutation(3);
    iota(all(permutation),0);
    string inp, color="RGB";
    cin>>n>>inp;
    string ansStr=inp;
    for(ll i=0; i<6; ++i) {
        ll cnt=0;
        string s="";
        for(ll j=0; j<n; ++j) {
            s+=color[permutation[j%3]];
            cnt+=s[j]!=inp[j];
        }
        if(cnt<ans) {
            ansStr=s;
            ans=cnt;
        }
        next_permutation(all(permutation));
    }
    if(ansStr==inp) ans=0;
    cout<<ans<<el<<ansStr<<el;


    return 0;
}

