#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

void placeCube(vi& tower_tops,int target){
    int s = 0, e = tower_tops.size()-1;
    int correct_tower = e;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(tower_tops[mid]>target){
            correct_tower = mid;
            e = mid - 1;
        }
        else s = mid + 1;
    }
    tower_tops[correct_tower] = target;
}

int main()
{
    int n;
    cin>>n;
    vi cubes(n);
    for(int i = 0;i<n;i++){
        cin>>cubes[i];
    }
    vi tower_tops;
    int num_of_towers = 1;
    tower_tops.push_back(cubes[0]);
    for(int i = 1;i<n;i++){
        int curr_cube = cubes[i];
        if(curr_cube>=tower_tops[num_of_towers-1]){
            tower_tops.push_back(curr_cube);
            num_of_towers++;
        }
        else{
            placeCube(tower_tops,curr_cube);
        }
    }
    cout<<num_of_towers<<"\n";
    return 0;
}/*

1 2 3 4 6 7 8 , place 5

*/