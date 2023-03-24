    // A sequence of integers is beautiful if each element of this sequence is divisible by 4.
    // You are given a sequence a1, a2, ..., an. In one step, you may choose any two elements of this sequence, remove them from 
    // the sequence and append their sum to the sequence. Compute the minimum number of steps necessary to make the given sequence beautiful.
    
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
            vl a(n);
            ll count1=0, count2=0, count3=0;
            for(int i=0; i<n; i++){ 
                cin>> a[i];
                a[i] = a[i]%4;
                if(a[i]==1) count1++;
                else if(a[i]==2) count2++;
                else if(a[i]==3) count3++;
            }

            ll ans=0;
            ll t1 = min(count1,count3);
            ans += t1;
            count1-= t1;
            count3-= t1;
            ll t2 = max(count1,count3);
            if(t2%2){
                cout<<-1<<endl;
                continue;
            }
            t2/=2;
            ans+=t2;
            ll t3 = min(t2,count2);
            ans+= t3;
            count2-= t3;
            t2-= t3;
            ll t4 = max(t2, count2);
            if(t4%2){
                cout<<-1<<endl;
                continue;
            }
            ans+= t4/2;
            cout<<ans<<endl;

            
        }
     
        return 0;
    }