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
    char curr = s[0];
    int freq = 1;
    int maxFreq = 1;
    for(int i = 1;i<s.length();i++){
        if(s[i]==curr){
            freq++;
        }
        else{
            freq = 1;
            curr = s[i];
        }
        maxFreq = max(maxFreq,freq);
    }
    cout<<maxFreq<<endl;
    return 0;
}