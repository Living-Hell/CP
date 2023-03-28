// Chef's birthday is coming soon! His friend Fehc is going to send him a string of length N as a gift. 
// Knowing that Chef doesn't like palindromes, Fehc wants the longest palindromic substring to be as short as possible. 
// The string should only contain the first A latin letters(e.g. let A=2, then this string only contains 'a' and 'b'). 
// Please help Fehc and find such a string. If multiple solution exists, you can print any.

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
        vector<char> alpha;
        for(int i=0; i<26; i++) alpha.push_back('a'+i);
        
        ll n,a;
        cin>>n>>a;
        
        if(a>=n){
            cout<<1<<" ";
            for(int i=0; i<n; i++)
                cout<<alpha[i];
            cout<<endl;
        }
        else{
            if(a==1){
                cout<<n<<" ";
                for(int i=0; i<n; i++) cout<<"a";
                cout<<endl;
            }
            else if(a==2){
                if(n==1 || n==2){
                    cout<<1<<" ";
                    for(int i=0; i<n; i++) cout<<alpha[i];
                    cout<<endl;
                }
                else if(n==3 || n==4){
                    cout<<2<<" ";
                    for(int i=0; i<n/2; i++) cout<<"a";
                    for(int i=0; i<n-(n/2); i++) cout<<"b";
                    cout<<endl;
                }
                else if(n<=8){
                    string s8 = "aaababbb";
                    cout<<3<<" ";
                    for(int i=0; i<n; i++) cout<<s8[i];
                    cout<<endl;
                }
                else{
                    string s = "aababb";
                    cout<<4<<" ";
                    ll q = n/6;
                    ll r = n%6;
                    for(int i=0; i<q; i++) cout<<s;
                    for(int i=0; i<r; i++) cout<<s[i];
                    cout<<endl;
                }
            }
            else{
                ll q = n/3;
                ll r = n%3;
                cout<<1<<" ";
                for(int i=0; i<q; i++) cout<<"abc";
                for(int i=0; i<r; i++) cout<<alpha[i];
                cout<<endl;
            }
        }
    }
    return 0;
}