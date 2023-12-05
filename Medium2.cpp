#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    vector<int> ans,v(n); 
    for(int i=0;i<n;i++)
        cin>>v[i];
    map<int, int> mp;
    int req = int(n / 3) + 1;
    for (int x:v) {
        mp[x]++;
        if (mp[x] == req) {
            ans.push_back(x);
        }
        if (ans.size() == 2) break;
    }
    for (int x : ans)
        cout << x << " ";
    cout << "\n";
    return 0;
}
