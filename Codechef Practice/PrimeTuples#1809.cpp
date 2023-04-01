// A tuple (a,b,c) is considered good if it consists of three prime numbers a, b and c such that a<b<c≤N and a+b=c.
// Two tuples are considered different if they differ in at least one position. Given NN, find the number of good tuples that can be formed 
// by integers from 1 to N.

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

void sieveOfEratosthenes(vector<bool> &primes, ll n){
    for(int i=2; i*i<=n; i++){
        if(primes[i]){
            for(int j=i*i; j<=n; j+=i)
                primes[j]=0;
        }
    }
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<bool> primes(1000001,1);
    sieveOfEratosthenes(primes,1000000);
    
    vl ans(1000001);
    ans[0] = ans[1] = ans[2] = ans[3] = 0;
    
    for(ll i=4; i<=1000000; i++){
        ans[i] = ans[i-1];
        if(primes[i] && primes[i-2]) ans[i]++;
    }
    
    long long int t;        
    cin >> t;
    while(t--)
    {
        ll n;
        cin>>n; 
        cout<<ans[n]<<endl;
    }
    
    return 0;
}