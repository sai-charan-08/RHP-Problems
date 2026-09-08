#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int N,K; cin>>N>>K;
    int F=N/K;
    vector<bool> own(F,false);
    string s; cin>>s;
    for(unsigned int i=0; i<s.size(); i++){
        if(s[i]=='0'){
            int farmidx=i/K;
            own[farmidx]=true;
        }
    }
    int fcnt=0;
    for(int f=0; f<F; f++){
        if(!own[f]){
            fcnt++;
        }
    }
    cout<<fcnt<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
