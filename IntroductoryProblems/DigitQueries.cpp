#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

ll power(ll base,ll times){
    ll ans = 1;
    while(times--){
        ans*=base;
    }
    return ans;
}

int main()
{
    int q;
    cin>>q;
    while(q--){
        ll n;//289
        cin>>n;
        ll curr_digits = 1;
        ll total_digits = 9;
        while(n > total_digits){
            curr_digits++;
            total_digits+=curr_digits*9*power(10,curr_digits-1);
        }

        //cout<<curr_digits<<" "<<total_digits<<endl;
        //we are at 2889......we need 289
        ll extra_numbers = (total_digits - n)/curr_digits;
        ll remainder = (total_digits - n)%curr_digits;
        ll number = power(10,curr_digits)-1-extra_numbers;

        string ans = to_string(number);
        cout<<ans[curr_digits-1-remainder]<<endl;  
    }
    return 0;
}

/*
1 digit = 9 numbers => total digits till one digit = 9
2 digit = 90 =>total digits till two digit = 189
3 digit = 900=>2889
4 digit = 9000
and so on
total digits in numbers with n digits = 9*10^(n-1)*n
*/