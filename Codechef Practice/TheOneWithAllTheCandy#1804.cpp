// There are N neighbours. The ith neigbhour has initial energy equal to Ai​. There is one bowl filled with chocolates. 
// The neighbours are made to stand in a row and the bowl is passed around by obeying the following rules:

// Any person can hold the bowl initially.
// If the person holding the bowl has positive energy, he/she passes the bowl to the person on the immediate right of him/her. 
// The rightmost person in the row passes the bowl to the leftmost person in the row.
// The act of passing the bowl takes 1 second.
// If the person holding the bowl has non-positive energy, he/she drops the bowl.
// After each pass, the energy of the person reduces by 1.

// Among all possible ways in which the N neighbours start the game, find the maximum time until the bowl is dropped.
    
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