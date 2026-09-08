#include<iostream>
#include<vector>
#define ll long long int
using namespace std;
 
void solve() {
	int N, M;
	cin >> N >> M;
 
	vector<int> cnt(M + 1, 0), preSum(M + 1, 0);
	for(int ctr = 1; ctr <= N; ctr++) {
		int curr; cin >> curr;
		cnt[curr]++;
	}
	
	for(int cl = 1; cl <= M; cl++) {
		preSum[cl] = preSum[cl - 1] + cnt[cl];
	}
	
	vector<ll> answer(M + 1, 0);
	for(int cut = 1; cut <= min(M, 18); cut++) {
		ll maxc = 0;
		for(int x = 1; x <= M; x++) {
			ll currc = 0;
			for(int mul = 1; 1LL * mul * x <= M; mul++) {
				int lt = mul * x, rt = lt + x - 1;
				currc += min(1LL * mul, (1LL << cut) - 1) * (preSum[min(rt, M)] - preSum[lt - 1]);
			}
			if((1LL << cut) * x <= M) {
				currc += cnt[(1LL << cut) * x];
			}
			maxc = max(maxc, currc);
		}
		answer[cut] = maxc;
	}
	
	for(int cut = 1; cut <= M; cut++) {
		cout << answer[min(cut, 18)] << (cut == M ? "\n" : " ");
	}
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int tc; cin >> tc;
	while(tc--) solve();
	return 0;
}
