#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define endl "\n"
#define FLP(i,a,b) for (int i = a; i < b; i++)
typedef vector<int> vi;
typedef pair<int, int> pi;

int main(){
	int a[5];
	a[0] = 5;
	a[1] = 4;
	a[2] = 3;
	a[3] = 2;
	a[4] = 1;
	FLP(i, 0, 5){
		cout << a[i] << " ";
	}
	cout << endl;
}

