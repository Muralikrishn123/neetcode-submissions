class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
      
        for(auto& x: tokens){
            int y = 0;
            if(x =="+" || x == "-" || x=="/" || x=="*"){
                int n1 = s.top();
                s.pop();
                int n2 = s.top();
                s.pop();
                if(x == "+") y = n1+n2;
                if(x == "-") y = n2-n1;
                if(x == "/") y = n2/n1;
                if(x == "*") y = n1*n2;

                s.push(y);
            }else{
                int a = stoi(x);
                s.push(a);
            }
        }
        return s.top();
    }
};
