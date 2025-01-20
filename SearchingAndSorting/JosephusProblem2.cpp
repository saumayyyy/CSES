#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,k;
    cin>>n>>k;
    int val = sqrt(n);//max elements in a row
    vector<vector<int>>arr;
    int count = 0;
    vector<int>temp;
    for(int i = 1;i<=n;i++){
        if(count>=val){
            arr.push_back(temp);
            temp.clear();
            count = 0;
        }
        temp.push_back(i);
        count++;
    }
    if(!temp.empty())arr.push_back(temp);
    int row = 0,col = 0;
    for(int i = 0;i<n;i++){
        int j = k%(n-i);//number of person to be killed.

        while(j){
            if(col + j < arr[row].size()){
                col+=j;
                j = 0;
            }
            else{
                j = j - (arr[row].size() - col);
                col = 0;
                row++;
            }
            if(row >= arr.size())row = 0;
        }
        while(arr[row].size()<=col){
            col = 0;
            row++;
            if(row >= arr.size())row = 0;
        }
        //we have reached the correct index (row,col);
        //eliminate this element
        cout<<arr[row][col]<<" ";
        if (i != n - 1) {
            arr[row].erase(arr[row].begin() + col);
            while (arr[row].size() <= col) {
                col = 0;
                row++;
                if (row >= arr.size())
                    row = 0;
            }
        }
    }

    return 0;
}


/*
[[1,2],[3,4],[5,6],[7]]


*/