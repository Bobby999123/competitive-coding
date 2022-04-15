#include<stack>

bool findRedundantBrackets(string &s)
{
    // Write your code here.
    
    stack<char>st;
    
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        // opening bracket or opertor
        if(ch=='(' ||ch=='+' ||ch=='-' ||ch=='*'|| ch=='/'){
            st.push(ch);
        }
        // closing bracket , alphabets
        else{
            if(ch==')'){
                bool isRedundant=true;
                while(st.top()!='('){
                    char top=st.top();
                    if(top=='+' ||top=='-' ||top=='*' ||top=='/'){
                        isRedundant=false;
                    }
                    st.pop();
                }
                
                 if(isRedundant==true){
                    return true;
                 }
            st.pop();
            }
           
            
        }
        
    }
}
