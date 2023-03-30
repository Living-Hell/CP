// It's finally summer in Chefland! So our chef is looking forward to prepare some of the best "beat-the-heat" dishes to attract more customers. 
// He summons the Wizard of Dessert to help him with one such dish.
// The wizard provides the chef with a sequence of N ingredients where the ith ingredient has a delish value of D[i]. The preparation of the dish 
// takes place in two phases.
// Phase 1 : The chef chooses two indices i and j and adds the ingredients i, i+1, ..., j to his dish. He also finds the sum of the delish value in this range i.e D[i] + D[i+1] + ... + D[j].
// Phase 2 : The chef chooses two more indices k and l and adds the ingredients k, k+1, ..., l to his dish. He also finds the sum of the delish value in this range i.e D[k] + D[k+1] + ... + D[l].
// Note that 1 ≤ i ≤ j < k ≤ l ≤ N.
// The total delish value of the dish is determined by the absolute difference between the values obtained in the two phases. Obviously, 
// the chef wants to maximize the total delish value for his dish. So, he hires you to help him.

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
    
    ll solve(vl v, ll n){
        vl st(n,0);
        ll curr=0;
        ll res = INT_MIN;
        for(int i=0; i<n; i++){
            curr+= v[i];
            res = max(res,curr);
            if(curr<0) curr=0;
            st[i] = res;
        }
        
        vl end(n,0);
        curr=0;
        res = INT_MAX;
        for(int i=n-1; i>0; i--){
            curr+= v[i];
            res = min(res,curr);
            if(curr>0) curr=0;
            end[i] = res;
        }
        
        ll ans = INT_MIN;
        
        for(int i=1; i<n; i++){
            ans = max(ans, abs(st[i-1]-end[i]));
        }
        
        return ans;
    }
    
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
            for(int i=0; i<n; i++) cin>>v[i];
            
            ll ans = solve(v,n);
            reverse(v.begin(),v.end());
            ans = max(ans,solve(v,n));
            
            cout<<ans<<endl;
        }
     
        return 0;
    }