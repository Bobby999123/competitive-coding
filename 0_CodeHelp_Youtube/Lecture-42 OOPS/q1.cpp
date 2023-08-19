#include<bits/stdc++.h>
using namespace std;

int addingcost(int input1,int input2[],int input3){
    
    int ans=0;

    vector<int> 
    
    for(int i=1;i<input1;i+=2){
        ans=ans+(input3*(input2[i-1]+input2[i]));
    }
    
    return ans;
}

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	int input1=4;
    int input2[]={4,5,6,7};
    int input3=3;
    
    int ans=addingcost(input1,input2,input3);
    cout<<ans<<endl;

    return 0;

}