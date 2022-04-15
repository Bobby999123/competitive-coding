#include<bits/stdc++.h>
using namespace std;

vector<int> union_two_sorted_array(vector<int> a,vector<int> b){
    vector<int> ans;
    int m=a.size();
    int n=b.size();
    int i=0;
    int j=0;
    
    
    while(i<m && j<n){
        if(a[i]==b[j]){
            if(ans.size()>0 && ans[ans.size()-1]!=a[i]){
            	ans.push_back(a[i]);
            }
            else if(ans.size()==0){
            	ans.push_back(a[i]);
            }
            i++;
            j++;
            
        }
        else if(a[i]<b[j]){
            if(ans.size()>0 && ans[ans.size()-1]!=a[i]){
            	ans.push_back(a[i]);
            }
            else if(ans.size()==0){
            	ans.push_back(a[i]);
            }
            i++;
        }
        else{
        	if(ans.size()>0 && ans[ans.size()-1]!=b[j]){
            	ans.push_back(b[j]);
            }
            else if(ans.size()==0){
            	ans.push_back(b[j]);
            }
            
            j++;
        }
    }
    
    while(i<m){
        if(ans[ans.size()-1]!=a[i]){
            ans.push_back(a[i]);
        }
        i++;
    }
    
    while(j<n){
        if(ans[ans.size()-1]!=b[j]){
            ans.push_back(b[j]);
        }
        j++;
    }
    
   
    
    return ans;
}


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	vector<int> a{1,1,1,2,2,7,8,9,9};
    vector<int> b{1,1,3,3,7,8,8,8};
    
    vector<int> ans=union_two_sorted_array(a,b);
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;

	

}