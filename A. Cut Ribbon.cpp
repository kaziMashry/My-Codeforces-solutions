/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define el '\n'
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
const int MAX = 2003;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,a[3],maxi=-1;
    cin>>n>>a[0]>>a[1]>>a[2];

    for(ll i=0; i<=n; ++i) {
        for(ll j=0; j<=n; ++j) {
            if((n-(i*a[1]+j*a[0]))%a[2]==0 && (n-(i*a[1]+j*a[0]))>=0) {
                maxi=max(maxi,(i+j+((n-(i*a[1]+j*a[0]))/a[2])));
            }
        }
    }
    cout<<maxi<<el;
    return 0;
}


