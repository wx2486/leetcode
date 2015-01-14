class Solution {
public:
    bool isValid(string s) {
        string st;
        for (int i=0; i<s.length(); i++)
            if (s[i] == '('
            || s[i] == '{'
				|| s[i] == '[')
                st += s[i];
            else
            {
                char c;
                if (s[i] == ')')
                    c = '(';
                else if (s[i] == '}')
                    c = '{';
                else if (s[i] == ']')
                    c = '[';
                
                if (st.empty() || *st.rbegin() != c)
                    return false;
                
                st.pop_back();
            }
            
        return st.empty();
    }
};
