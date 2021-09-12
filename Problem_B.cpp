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
        int n, m, a, b;
        fin>>n>>m>>a>>b;
        int l = (m+n)-1;
        if(a<l || b<l){
            fout<<"Case #"<<tc<<": Impossible"<<endl;
        }
        else{
            vector<vector<int>> v(n, vector<int>(m, 1));
            fout<<"Case #"<<tc<<": Possible"<<endl;
            a = a-(l-1);
            b = b-(l-1);
            v[n-1][0] = b;
            v[n-1][m-1] = a;
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    fout<<v[i][j]<<" ";
                }
                fout<<endl;
            }
        }
        tc++;
    }
}
