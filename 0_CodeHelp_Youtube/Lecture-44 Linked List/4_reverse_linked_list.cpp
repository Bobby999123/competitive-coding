#include<bits/stdc++.h>
using namespace std;

int getLength(ListNode* &head){
        if(head==NULL){
            return 0;
        }
        
        int c=0;
        ListNode* temp=head;
        while(temp!=NULL){
            c=c+1;
            temp=temp->next;
        }
        
        return c;
        
    }
    
    ListNode* reverseList(ListNode* head) {
        
        int len=getLength(head);
        
        // cout<<len;
        ListNode* p=head;
        
        ListNode* q=head;
        int i=1;
        int j=len;
        while(i<j){
            for(int i=1;i<j;i++){
                q=q->next;
            }
            
            swap(p->val,q->val);
            p=p->next;
            q=head;
            
            i++;
            j--;
            
        }
        
        return head;
         
        
        
        
        // Using vector but not allowed
        
        
//         if(head==NULL){
//             return head;
//         }
        
//         vector<int> v;
//         ListNode* temp=head;
//         while(temp!=NULL){
//             v.push_back(temp->val);
//             temp=temp->next;
//         }
        
//         reverse(v.begin(),v.end());
        
//         ListNode* t=new ListNode(v[0]);
//         ListNode* ptr=t;
//         for(int i=1;i<v.size();i++){
//             int value=v[i];
//             ListNode* newNode=new ListNode(value);
//             t->next=newNode;
//             t=t->next;
//         }
        
//         return ptr;
        
        
        
    }

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	return 0;

}