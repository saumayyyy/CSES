#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

int main()
{
    int n,x;
    cin>>n>>x;
    vector<pii>arr(n);
    for(int i = 0;i<n;i++){
        int a;
        cin>>a;
        arr[i] = {a,i};
    }
    sort(arr.begin(),arr.end());
    for(int i = 0;i<n;i++){
        int j = i+1,k = n-1;
        while(j<k){
            if(arr[i].first+arr[j].first+arr[k].first==x){
                cout<<arr[i].second+1<<" "<<arr[j].second+1<<" "<<arr[k].second+1<<endl;
                return 0;
            }
            else if(arr[i].first+arr[j].first+arr[k].first>x)k--;
            else j++;
        }
    }
    cout<<"IMPOSSIBLE"<<"\n";
    return 0;
}