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
    vector<string> arr = {"0","1"};
    n--;
    while(n--){
        int size = arr.size();
        for(int i = size-1;i>=0;i--){
            arr.push_back(arr[i]);
        }
        for(int i = 0;i<2*size;i++){
            if(i<size){
                arr[i] = "0" + arr[i];
            }
            else{
                arr[i] = "1" + arr[i];
            }
        }
    }
    for(auto it : arr){
        cout<<it<<endl;
    }
    return 0;
}

/*
n = 2
00 01 11 10
0 1 3 2
n = 3
000 001 011 010 110 111 101 100
0 1 3 2 6 7 5 4
n = 4
0000 0001 0011 0010 0110 0111 0101 0100 1100 1101 1111 1110 1010 1011 1001 1000
0 1 3 2 6 7 5 4 12 13 15 14 10 11 9 8
*/