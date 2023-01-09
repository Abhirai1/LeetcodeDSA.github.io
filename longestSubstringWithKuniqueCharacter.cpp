#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; 
    cin>>s; 
    int k; 
    cin>>k; 
    int i=0,j=0; 
    map<char,int> mp;
    int ans=INT_MIN;    
    while(j<s.size()){
        mp[s[j]]++; 
        if(mp.size()<k){
            j++;
        } 
        else if(mp.size()==k){
            ans=max(ans,j-i+1);
            j++;
        } 
        else if(mp.size() > k){
            while(mp.size() > k){
                mp[s[i]]--;
                if(mp[s[i]]==0){
                    mp.erase(s[i]);
                } 
                i++;
            } 
            j++;
        }
    } 
    cout<<ans<<endl;
}
