#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

int main()
{   
    ll n;
    cin>>n;
    ll sum = n*(n+1)/2;
    if(sum&1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        vi visited(n+1,0);
        ll target = sum/2;
        ll currSum = 0;
        ll temp = n;
        ll cnt = 0;
        while(currSum!=target){
            currSum+=temp;
            visited[temp] = 1;
            cnt++;
            ll remaining = target - currSum;
            temp--;
            if(remaining<=temp && remaining!=0){
                visited[remaining] = 1;
                cnt++;
                break;
            }
        }
        cout<<n-cnt<<endl;
        for(int i = 1;i<=n;i++){
            if(visited[i]==0){
                cout<<i<<" ";
            }
        }
        cout<<endl;
        cout<<cnt<<endl;
        for(int i = 1;i<=n;i++){
            if(visited[i]==1){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}

/*
n = 1 ->no
n = 2 ->no , sum = 3
n = 3 ->yes 1,2   3 ,sum = 6
n = 4 ->yes 1,4   2,3 , sum = 10
n = 5 ->no , sum = 15
n = 6 ->no , sum = 21
n = 7 ->yes 7,6,1  2,3,4,5
n = 8 ->yes 8,7,3    ,sum = 36
n = 9 ->no
n = 10 ->no
n = 11 ->yes 


1 2 3 4 5 6 7 8
target = 18
1,8,2,7
*/