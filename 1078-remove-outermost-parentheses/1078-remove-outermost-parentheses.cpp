class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int depth=0;
        for(char c:s){
            if(c=='('){
                if(depth>0){
                    result+=c;//append only if we are not at outermost level
                }
                depth++;
            }else{
                depth--;//decrease depth means we encounter ')'
                if(depth>0){
                    result+=c;
                }
            }
        }
        return result;
    }
};
 