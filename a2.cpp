#include <bits/stdc++.h>
using namespace std;
#define ll           long long int
#define vint         vector<int>
#define vll          vector<ll>
#define vstr         vector<string>
#define vvint        vector<vector<int> >
#define vvll         vector<vector<ll> >
#define vip          vector<pair<int,int> >
#define vlp          vector<pair<ll,ll> >
#define input(arr)   for(auto &x:arr) cin>>x;
#define output(arr)   for(auto &x:arr) cout<<x<<" ";
#define all(x)       (x).begin(), (x).end()
#define rall(x)      (x).rbegin(), (x).rend()

const int N = 100005;
const ll mod = 1000000007;
const ll inf = 1e17;
const long double pi = (acos(-1));

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    int t;
    fin>>t;
    int tc=1;
    while(t--){
        int n;
        fin>>n;
        string s;
        fin>>s;
        long long int ans=0;
        char lc = ' ';
        long long int val = 0;
        vector<long long int> dp(n, 0);
        for(int i=0; i<n; i++){
            if(s[i]=='F'){
                dp[i] = i==0 ? 0:dp[i-1];
            }
            else{
                if(s[i]!=lc){
                    dp[i] = val;
                }
                else{
                    dp[i] = i==0 ? 0:dp[i-1];
                }
                val = dp[i]+(i+1);
                lc = s[i];
            }
            dp[i]%=mod;
        }
        for(auto &i: dp){
            ans+=i;
            ans%=mod;
        }
        fout<<"Case #"<<tc<<": "<<ans<<endl;
        tc++;
    }
}