class Solution {
public:
    bool isValid(string s) {
        // stack<char> validpar;
        // for(char c:s){
        //     if(c=='(' ||c=='[' || c=='{'){
        //         validpar.push(c);
        //     }else {
        //         if( validpar.empty()){
        // return false;
        //     }
               
        // char top=validpar.top();
        // validpar.pop();
        
        //     if((c=='{' && top!='}')||(c=='(' && top!=')') ||(c=='[' && top!=']')){
        //         return false;
            
        //     }}}
        //     return validpar.empty();
        // }

    // };
      stack<char> parenthesesStack;
        
        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                parenthesesStack.push(ch);
            } else {
                if (parenthesesStack.empty()) {
                    return false; // Closing parenthesis encountered without a matching opening parenthesis
                }
                char top = parenthesesStack.top();
                parenthesesStack.pop();
                if ((ch == ')' && top != '(') ||
                    (ch == '}' && top != '{') ||
                    (ch == ']' && top != '[')) {
                    return false; // Mismatched opening and closing parentheses
                }
            }
        }
        
        return parenthesesStack.empty(); // Return true if stack is empty, false otherwise
    }
};
