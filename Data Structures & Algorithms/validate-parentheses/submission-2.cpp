

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> myStack;

        for (char c : s) {
            // std::cout << c << " ";

            if(c=='(' || c=='{' || c=='[' ){
                myStack.push(c);
            }
            else{
                if (myStack.empty()) {
                    return false;
                }
                if( (c==')' and myStack.top()!='(') 
                || (c=='}' and myStack.top()!='{') 
                || (c==']' and myStack.top()!='[') ){
                    return false;
                }

                if( (c==')' and myStack.top()=='(') 
                || (c=='}' and myStack.top()=='{') 
                || (c==']' and myStack.top()=='[') ){
                    myStack.pop();
                }
            }
        }

        // std::stack<char> tempStack = myStack;
        // std::cout << "Stack elements (from top to bottom): ";
        // while (!tempStack.empty()) {
        //     std::cout << tempStack.top() << " ";
        //     tempStack.pop(); // Remove from the copy
        // }
        return myStack.empty(); 
    }
};