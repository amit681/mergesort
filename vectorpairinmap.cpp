#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define gc getchar_unlocked
bool cmp(pair<int,string> &a,pair<int,string> &b)
{
    return (a.first < b.first);
}
int main()
{
    int n,m,age;
    string s,s1;
    cin>>n>>m;
    map<string,vector<pair<int,string> > > mp;
    for(int i=0;i<n;i++)
    cin >> s;
    for(int i=0;i<m;i++)
    {
        cin>>s>>s1;
        cin>>age;
        mp[s].push_back(make_pair(age,s1));
    }
    for(auto j : mp)
    {
        cout << j.first << "\n";
        auto V = j.second;
        sort(V.begin(),V.end(),cmp);
        for(auto pp : V)
        cout << pp.second << " " << pp.first << "\n";
    }
    return 0;
}




https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/monks-school-4/