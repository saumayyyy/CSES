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
    vector<vi>arr(n,vector<int>(3));
    for(int i = 0;i<n;i++){
        int a,b;
        cin>>a>>b;
        arr[i] = {a,b,i};
    }
    vi rooms(n);
    sort(arr.begin(),arr.end());
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    for(int i = 0;i<n;i++){
        int arrival = arr[i][0];
        if(!pq.empty()){
            int dept = pq.top().first;
            if(arrival > dept){
                int room = pq.top().second;
                pq.pop();
                pq.push({arr[i][1],room});
                rooms[arr[i][2]] = room;
            }
            else{
                int newRoom = pq.size() + 1;
                pq.push({arr[i][1],newRoom});
                rooms[arr[i][2]] = newRoom;
            }
        }
        else{
            pq.push({arr[i][1],1});
            rooms[arr[i][2]] = 1;
        }
    }
    cout<<pq.size()<<endl;
    for(auto it : rooms){
        cout<<it<<" ";
    }
    return 0;
}
/*
(1 2) 0
(2 4) 1
(4 4) 2

room = 2


*/