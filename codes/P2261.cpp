#include <iostream>

using namespace std;

typedef long long ll;
ll n, k;
ll ans;

int main () {
	cin>>n>>k;
	ans = n*k;
	for(ll l = 1, r, len; l<=n; l = r + 1) {   //整除分块 
		if(k/l!=0) r = min(n, k/(k/l));
		else r = n;
		len = r - l + 1;
		ans -= (k/l)*len*(l+r)/2;  //这部分为等差数列 
	}
	cout<<ans<<endl;
	return 0;
}
