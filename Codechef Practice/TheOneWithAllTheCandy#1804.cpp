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
            vl v(n);
            for(int i=0; i<n; i++)
                cin>>v[i];
            
            ll mn = *min_element(v.begin(),v.end());
            ll mnm=0;
            for(int i=0; i<n; i++){
                if(v[i] == mn)
                    mnm++;
            }
            ll ans=0;
            ans = (mn+1)*n - mnm;
            cout<<ans<<endl;
        }
     
        return 0;
    }