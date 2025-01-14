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
    vector<pii> numbers(n);
    for(int i = 0;i<n;i++){
        int a;
        cin>>a;
        numbers[i] = {a,i};
    }
    sort(numbers.begin(),numbers.end());
    int i = 0,j = n-1;
    while(i<j){
        if(numbers[i].first+numbers[j].first==x){
            cout<<numbers[i].second+1<<" "<<numbers[j].second+1<<endl;
            return 0;
        }
        else if(numbers[i].first+numbers[j].first>x){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}