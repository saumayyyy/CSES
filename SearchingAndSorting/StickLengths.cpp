#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

ll findDiff(int val,vll& sizes){
    ll diff = 0;
    for(int i = 0;i<sizes.size();i++){
        diff+=abs(val - sizes[i]);
    }
    return diff;
}

int main()
{
    int n;
    cin>>n;
    vll sizes(n);
    for(int i = 0;i<n;i++){
        cin>>sizes[i];
    }
    sort(sizes.begin(),sizes.end());
    if(n&1){
        cout<<findDiff(sizes[n/2],sizes)<<endl;
    }
    else{
        cout<<min(findDiff(sizes[n/2],sizes),findDiff(sizes[(n/2)+1],sizes))<<endl;
    }
    
    return 0;
}
/*
1 2 3 4


1 5 8 9






*/