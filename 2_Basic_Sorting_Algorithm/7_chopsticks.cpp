#include<bits/stdc++.h>
using namespace std;

int pairSticks(vector<int> length, int D)
{
    // your code goes here
    
    sort(length.begin(),length.end());
    int res=0;
    for(int i=0;i<length.size();i++){
        if(length[i+1]-length[i]<=D){
            res++;
            i=i+2;
        }
    }
    return res;
    
    
}