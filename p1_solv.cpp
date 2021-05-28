#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define endl "\n"
#define all(v) (v).begin(),(v).end()
#define sz(v) (v).size()
// #define int long long
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef pair<pii,int> ppi;
typedef vector<pii> vpi;
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define d0(x) cout<<(x)<<" "
#define d1(x) cout<<(x)<<endl
#define d2(x,y) cout<<(x)<<" "<<(y)<<endl
#define d3(x,y,z) cout<<(x)<<" "<<(y)<<" "<<(z)<<endl
#define d4(a,b,c,d) cout<<(a)<<" "<<(b)<<" "<<(c)<<" "<<(d)<<endl
#define d5(a,b,c,d,e) cout<<(a)<<" "<<(b)<<" "<<(c)<<" "<<(d)<<" "<<(e)<<endl
#define d6(a,b,c,d,e,f) cout<<(a)<<" "<<(b)<<" "<<(c)<<" "<<(d)<<" "<<(e)<<" "<<(f)<<endl
bool desc_sort(const int & lhs,const int & rhs)
{
    return lhs>rhs;
}
bool desc_pii_sort(const pii & lhs , const pii & rhs)
{
    return lhs>rhs;
}
bool second_sort(const pii & lhs , const pii & rhs)
{
    pii a,b;
    a.F = lhs.S;
    a.S = lhs.F;
    b.F = rhs.S;
    b.S = rhs.F;
    return a<b;
}
template<class T> ostream& operator<<(ostream &os, vector<T> V) {
    os << "[ ";
    for(auto v : V) os << v << " ";
    return os << "]";
}
template<class T> ostream& operator<<(ostream &os, set<T> S){
    os << "{ ";
    for(auto s:S) os<<s<<" ";
    return os<<"}";
}
template<class L, class R> ostream& operator<<(ostream &os, pair<L,R> P) {
    return os << "(" << P.first << "," << P.second << ")";
}
template<class L, class R> ostream& operator<<(ostream &os, map<L,R> M) {
    os << "{ ";
    for(auto m:M) os<<"("<<m.F<<":"<<m.S<<") ";
    return os<<"}";
}
#define TRACE
#ifdef TRACE
    #define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
    template <typename Arg1>
    void __f(const char* name, Arg1&& arg1){
        cerr << name << " : " << arg1 << endl;
    }
    template <typename Arg1, typename... Args>
    void __f(const char* names, Arg1&& arg1, Args&&... args){
        const char* comma = strchr(names + 1, ',');
        cerr.write(names, comma - names) << " : " << arg1<<" | ";
        __f(comma+1, args...);
    }
#else
    #define trace(...)
#endif
 
 
// #define int long long
#define modd 1e0
 
 
 
inline ll fast_expo(ll base,ll power,ll modulo=modd){
    base%=modulo;
    if (base<0LL) base+=modulo;
    ll x=base,cnt=power,ans=1LL;
    while(cnt){
        if (cnt&1LL) ans=(ans*x)%modulo;
        x=(x*x)%modulo;
        cnt>>=1LL;
    }
    // int tmp=ans;
    return ans;
}
inline ll inv(ll base,ll modulo=modd){
    return fast_expo(base,modulo-2LL,modulo);
}

signed main(){
	
	ll t;
	cin>>t;
	while(t != 1){
		cout << t << " ";
		if(t%2 ==0){
			t = t/2;
		}else{
			t = 3*t + 1;
		}
	}
	cout << t << endl;

}
