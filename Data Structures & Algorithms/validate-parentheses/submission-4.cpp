class Solution {
public:
    bool isValid(string s) {
        
        //hashmap?
        //stack, lifo 
        stack <char> tracking; 
        
        //nesting loops wont work
        //(,[,{,}, ],)
        //{
        //[
        //(

        
        
        for (int i = 0; i < s.length(); ++i)
        {
            //either its opening or closing
            //if its open, push to stack
            if (s[i] == '{' || s[i] == '[' || s[i] == '(')
            {
                tracking.push(s[i]);
            }

            //if there's a top 
            else if (!tracking.empty())
            {
                //if its closed and matches the opening at top of stack
                if (s[i] == '}' && tracking.top() == '{' )
                {
                tracking.pop();
                }
                else if (s[i] == ']' && tracking.top() == '[' )
                {
                tracking.pop();
                }
                else if (s[i] == ')' && tracking.top() == '(' )
                {
                tracking.pop();
                }
                else
                {
                    //if there is a top and it doesnt have the corresponding
                    return false;
                }
            }
            else
            {//no top
                return false;
            }
        }
        
        if (tracking.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
