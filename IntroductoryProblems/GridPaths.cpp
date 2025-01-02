#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

vi dr = {0,1,0,-1};
vi dc = {1,0,-1,0};
string str;

int count_paths(int index,int row,int col,vector<vector<int>>& vis){
    //optimization 1->if we hit a wall......and we can move in 2 opposite directions only.....then return 0
    bool checkWall = ((col>=1 && col<=5 && !vis[row][col-1] && !vis[row][col+1])
    && ((row==0 && vis[row+1][col])||(row==6 && vis[row-1][col]))) || 
    ((row>=1 && row<=5 && !vis[row-1][col] && !vis[row+1][col])
    && ((col==0 && vis[row][col+1])||(col==6 && vis[row][col-1])));
    if(checkWall){
        return 0;
    }
    //optimization 2->if we are at a place where only 2 opposite ways available to move.....then return 0

    bool checkMiddle = ((row>=1 && row<=5 && col>=1 && col<=5)
    && vis[row+1][col] && vis[row-1][col] && !vis[row][col+1] && !vis[row][col-1])||
    ((row>=1 && row<=5 && col>=1 && col<=5) 
    && vis[row][col+1] && vis[row][col-1] && !vis[row+1][col] && !vis[row-1][col]);
    if(checkMiddle){
        return 0;
    }


    if(row==6 && col==0){
        if(index==48){
            return 1;
        }
        return 0;
    }
    if(index>=48){
        return 0;
    }
    int count = 0;
    switch(str[index]){
        case 'R':{
            if(col+1<7 && vis[row][col+1]==0){
                vis[row][col+1]=1;
                count+=count_paths(index+1,row,col+1,vis);
                vis[row][col+1]=0;
            }
            break;
        }
        case 'L':{
            if(col-1>=0 && vis[row][col-1]==0){
                vis[row][col-1]=1;
                count+=count_paths(index+1,row,col-1,vis);
                vis[row][col-1]=0;
            }
            break;
        }
        case 'U':{
            if(row-1>=0 && vis[row-1][col]==0){
                vis[row-1][col]=1;
                count+=count_paths(index+1,row-1,col,vis);
                vis[row-1][col]=0;
            }
            break;
        }
        case 'D':{
            if(row+1<7 && vis[row+1][col]==0){
                vis[row+1][col]=1;
                count+=count_paths(index+1,row+1,col,vis);
                vis[row+1][col]=0;
            }
            break;
        }
        default:{
            for(int i = 0;i<4;i++){
                int nr = row + dr[i];
                int nc = col + dc[i];
                if(nr>=0 && nr<7 && nc>=0 && nc<7 && vis[nr][nc]==0){
                    vis[nr][nc]=1;
                    count+=count_paths(index+1,nr,nc,vis);
                    vis[nr][nc]=0;
                }
            }
        }    
    }
    return count;
}

int main()
{
    
    cin>>str;
    
    vector<vector<int>>vis(7,vector<int>(7,0));
    vis[0][0] = 1;
    int answer = count_paths(0,0,0,vis);
    cout<<answer<<endl;

    return 0;
}