#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

int main()
{
    int n;
    cin>>n;
    vector<vi>arr(n);
    for(int i = 0;i<n;i++){
        int a,b;
        cin>>a>>b;
        arr[i] = {a,b,i};
    }

    sort(arr.begin(),arr.end(),[](vi a, vi b){
        if(a[0]==b[0]){
            return a[1]>b[1];
        }
        return a[0] < b[0];
    });
    vi contains(n,0);
    int lowest_r = INT_MAX;
    for(int i = n-1;i>=0;i--){
        int curr_r = arr[i][1];
        if(curr_r >= lowest_r){
            contains[arr[i][2]] =1;
        }
        lowest_r = min(lowest_r,curr_r);
    }
    vi containedBy(n,0);
    int highest_r = INT_MIN;
    for(int i = 0;i<n;i++){
        int curr_r = arr[i][1];
        if(curr_r <= highest_r){
            containedBy[arr[i][2]] = 1;
        }
        highest_r = max(highest_r,curr_r);
    }
    for(int i = 0;i<n;i++){
        cout<<contains[i]<<" ";
    }
    cout<<"\n";
    for(int i = 0;i<n;i++){
        cout<<containedBy[i]<<" ";
    }
    return 0;
}
/*
[1,6],[2,4],[3,6],[4,8]
    curr_l = 1 curr_r = 6
    lowest r = 4




*/