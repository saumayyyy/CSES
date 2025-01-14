#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

int main()
{
    //sort wrt to finish time.
    int n;
    cin>>n;

    vector<pii>timings(n);

    for(int i = 0;i<n;i++){
        int a,b;
        cin>>a>>b;
        timings[i] = {a,b};
    }

    sort(timings.begin(),timings.end(),[](pii &a, pii &b){
        return a.second<b.second;
    });
    int count = 1;
    int currEnd = timings[0].second;
    for(int i = 1;i<n;i++){
        int nextStart = timings[i].first;
        if(nextStart>=currEnd){
            count++;
            currEnd = timings[i].second;
        }
        else continue;
    }

    cout<<count<<endl;
    return 0;
}
/*

(3,5),(5,8),(4,9)

*/