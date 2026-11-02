
class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        int result = 0;

        stack<int> st;

        for (int i = 0; i < tokens.size(); i++) {
            string token = tokens[i];

            if(token=="+"){
                int op1 = st.top();
                st.pop();
                int op2 = st.top();
                st.pop();
                st.push(op1+op2);
            }
            else if(token=="-"){
                int op1 = st.top();
                st.pop();
                int op2 = st.top();
                st.pop();
                st.push(op2-op1);
            }
            else if(token=="*"){
                int op1 = st.top();
                st.pop();
                int op2 = st.top();
                st.pop();
                st.push(op1*op2);
            }
            else if(token=="/"){
                int op1 = st.top();
                st.pop();
                int op2 = st.top();
                st.pop();
                st.push(op2/op1);
            }

            else{
                st.push(stoi(token));
            }

            


        }

        return st.top();
    }
};
