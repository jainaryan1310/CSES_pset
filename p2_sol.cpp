#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define endl "\n"
#define FLP(i,a,b) for (int i = a; i < b; i++)
typedef vector<int> vi;
typedef pair<int, int> pi;

int main(){

	fio;
	
	ll n; 
	cin>>n;

	vector<ll> num;	
	ll a;

	while(cin>>a){
		num.push_back(a);
	}
	
	num.qsort();

	FLP(i,0,n-1){
		if(num.at(i)!=i+1){
			cout<<i<<endl;
			return 0;
		}
	}
	
	cout<<n<<endl;
	return 0;
}
