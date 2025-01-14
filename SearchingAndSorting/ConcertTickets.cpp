#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

int main()
{   
    int n,m;
    cin>>n>>m;
    multiset<int>st;
    for(int i = 0;i<n;i++){
        int a;
        cin>>a;
        st.insert(a);
    }

    for(int j = 0;j<m;j++){
        int a;
        cin>>a;
        auto it = st.upper_bound(a);
        if(it==st.begin()){
            cout<<-1<<endl;
        }
        else{
            it--;
            cout<<*(it)<<endl;
            st.erase(it);
        }
    }
    return 0;
}
/*


*/