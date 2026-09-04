#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N,K,t,curr;

    cin >> t;

    while(t--){
        cin >> N >> K;

        int ans = 0;
        int cnt[3 * N + 2] = {};

        for(int i = 0; i < N; i++){
            cin >> curr;
            cnt[curr]++;
        }

        for(int val = 1; val <= N + N; val++){
            int curr = val;

            while(cnt[curr] > K){
                cnt[curr + 1] += cnt[curr] - 1;
                cnt[curr] = 1;
                curr++;
            }

            ans = max(ans, curr - val);
        }

        cout << ans << endl;
    }
}
