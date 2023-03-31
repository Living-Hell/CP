// JJ challenges his friend GG to construct an array AA containing NN distinct elements such that the following conditions hold:
//     For all 1≤i≤N, 1≤≤Ai​≤10^5
//     For every subarray of length ≥2≥2, the sum of all the elements of the subarray is not divisible by the length of the subarray
// Please help perplexed GG to complete JJ's challenge.

    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    typedef pair<int, int> pii;
    typedef pair<ll, ll> pll;
    typedef pair<string, string> pss;
    typedef vector<int> vi;
    typedef vector<vi> vvi;
    typedef vector<pii> vii;
    typedef vector<ll> vl;
    typedef vector<vl> vvl;
     
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        long long int t;        
        cin >> t;
        while(t--)
        {
            ll n;
            cin>>n;
            
            vl ans(n);
            ans[0]=3; ans[1]=2;
            
            for(int i=2; i<n; i++){
                ans[i] = ans[i-2]+2;
            }
            
            for(ll i:ans) cout<<i<<" ";
            cout<<endl;
        }
     
        return 0;
    }