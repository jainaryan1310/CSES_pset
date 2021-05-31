#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define endl "\n"
#define FLP(i,a,b) for (int i = a; i < b; i++)
typedef vector<int> vi;
typedef pair<int, int> pi;

int n;

void search(vi permutation, bool chosen[]){
	//vi permutation = *permutation_pointer;
	if(permutation.size()==n){
		cout << "( ";
		FLP(i,0,n-1){
			cout << permutation.at(i) << ", ";
		}
		cout << permutation.at(n-1) << " )" << endl;
	}else{
		FLP(i,1,n+1){
			if(chosen[i]==1){
				continue;
			}else{
				chosen[i]=true;
				permutation.push_back(i);
				search(permutation, chosen);
				chosen[i]=false;
				permutation.pop_back();
			}
		}
	}
}



int main(){
	cin>>n;
	vi permutation;
	bool chosen[n+1];
	search(permutation, chosen);
	return 0;
}
