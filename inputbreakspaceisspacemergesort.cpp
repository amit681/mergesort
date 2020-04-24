https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/i-think-its-easy/

#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
cin.ignore();
vector<string> v;
while(t--){
    multimap<int,string>mymap;
v.clear();
string s,r;
getline(cin,s);
for(int i=0;i<s.size();i++){
if(isspace(s[i])){
v.push_back(r);
mymap.insert(make_pair(r.length(),r));
r.clear();
}
else
r=r+s[i];
}
v.push_back(r);
mymap.insert(make_pair(r.length(),r));
r.clear();

 multimap<int,string> :: iterator it; 
 if(t!=0)
    {for (it=mymap.begin() ; it!=mymap.end() ; it++) 
        cout << (*it).second <<" ";
        cout<<endl;}
        else 
        {
            cout<<" ";
        for (it=mymap.begin() ; it!=mymap.end() ; it++) 
        cout << (*it).second <<" ";}
}
}

