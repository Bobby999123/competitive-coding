#include<bits/stdc++.h>
using namespace std;

class TwoStack {
    
    int *arr;
    int top1;
    int top2;
    int size;

public:

    // Initialize TwoStack.
    TwoStack(int s) {
        // Write your code here.
        this->size=s;
        arr=new int[s];
        top1=-1;
        top2=s;
    }
    
    // Push in stack 1.
    void push1(int num) {
        // Write your code here.
        if(top2-top1>1){
            top1++;
            arr[top1]=num;
        }
    }

    // Push in stack 2.
    void push2(int num) {
        // Write your code here.
        if(top2-top1>1){
            top2--;
            arr[top2]=num;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        // Write your code here.
        if(top1>=0){
            int ans=arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        // Write your code here.
        if(top2>=0 && top2<size){
            int ans=arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }

};

int main(){
#ifndef ONLINE_JUDGE    

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif  

    TwoStack s1(10);

    s1.push1(22);
    s2.push2(11);

    s1.pop1(22);
    s2.pop2(11);




    // s1.pop();
    // s2.pop();
    

    // cout<<s1.peek()<<endl;

    // cout<<st.isEmpty()<<endl;




    
    
    


    return 0;

}
