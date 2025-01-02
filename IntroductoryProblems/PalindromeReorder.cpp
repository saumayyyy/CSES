#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

int main()
{
    string s;
    cin>>s;
    unordered_map<char,int>mpp;

    for(int i = 0;i<(int)s.length();i++){
        mpp[s[i]]++;
    }

    int odds = 0;
    char oddChar;
    int oddFreq = 0;
    for(auto it : mpp){
        if(it.second&1){
            odds++;
            oddChar = it.first;
            oddFreq = it.second;
        }
    }
    if(odds>1){
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        string ans = "";
        for(auto it : mpp){
            if((it.second&1)^1){
                int freq = it.second/2;
                while(freq--){
                    ans+=it.first;
                }
            }
        }
        string temp = ans;
        while(oddFreq--){
            ans += oddChar;
        }
        reverse(temp.begin(),temp.end());
        ans += temp;
        cout<<ans<<endl;
    }
    



    return 0;
}