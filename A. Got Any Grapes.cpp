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
    ll x,y,z,a,b,c;
    string msg="NO\n";
    cin>>x>>y>>z>>a>>b>>c;
    if(x<=a) {
        ll g=a-x;
        if(g+b>=y) {
            ll s=g+b-y+c;
            if(s>=z) msg="YES\n";
        }
    }
    cout<<msg;

    return 0;
}
