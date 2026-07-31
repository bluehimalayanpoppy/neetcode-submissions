class Solution {
public:
    bool isValid(string s) {
        

        stack <char> stuff; 

        //lifo 

        //stuff: ( [, { 
        //{
        //[
        //(
        if (s.size() == 0)
        {
            return true;
        }
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '[' || s[i] == '(' || s[i] == '{')
            {
                stuff.push(s[i]); 
            }
            else if (s[i] == '}' || s[i] == ')' || s[i] == ']')
            {
                //when you see a corresponding one pop them 
            
                if (!stuff.empty())
                {
                    if (s[i] == '}' && stuff.top() == '{')
                    {
                        stuff.pop(); 
                    } 
                    else if  (s[i] == ']'&&  stuff.top() == '[' )
                    {
                        stuff.pop();
                    } 
                    else if (s[i] == ')'  && stuff.top() == '(' )
                    {
                        stuff.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
                
        }
            
       
        
        if (stuff.empty())
        {
            return true; 
        }
        return false;
        
    }
};
