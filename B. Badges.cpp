/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define INF           0x3f3f3f3f
#define el            '\n'
#define x             first
#define y             second
#define pi            acos(-1.0)
#define pb            push_back
#define mp            make_pair
#define all(v)        v.begin(), v.end()
#define allr(v)       v.rbegin(), v.rend()
#define mem(x,y)      memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll b, g, n;
    cin>>b>>g>>n;
    ll ans=0;
    if(b>=g) {
        ll bl=0, r=0;
        for(ll blue=n; blue>=0; --blue) {
            bl+=blue, r+=(n-blue);
            ++ans;
            if(bl>b && r>g) break;
        }
    } else {
        ll bl=0, r=0;
        for(ll red=n; red>=0; --red) {
            bl+=(n-red), r+=red;
            ++ans;
            if(bl>b && r>g) break;
        }
    }
    cout<<ans<<el;
    return 0;
}
