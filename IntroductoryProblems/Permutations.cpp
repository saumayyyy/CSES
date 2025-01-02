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
    if(n==2 || n==3)
    {
        cout<<"NO SOLUTION";
    }
    else{
        for(int i = 2;i<=n;i+=2){
            cout<<i<<" ";
        }
        for(int i = 1;i<=n;i+=2){
            cout<<i<<" ";
        }
    }
    return 0;
}

/*
1 2 3 4 5 
1 3 5 2 4

n = 1 -> cout<<1
n = 2 ->No
n = 3 ->No
n = 4 -> 2 4 1 3
n = 5 -> 1 3 5 2 4
n = 6 -> 1 3 5 2 4 6
n = 7 -> 1 3 5 7 2 4 6
n = 8 -> 1 3 5 7 2 4 6 8
n = 9 -> 1 3 5 7 9 2 4 6 8
*/