#include <bits/stdc++.h>
using namespace std;

int checkStack(string expr)
{
    stack<char> s;
    int n, count = 0;
    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')
        {
            s.push(expr[i]);
        }
        switch (expr[i])
        {
        case ')':
            if (!s.empty() && s.top() == '(')
            {
                s.pop();
                count += 2;
            }
            break;

        case '}':
            if (!s.empty() && s.top() == '{')
            {
                s.pop();
                count += 2;
            }
            break;

        case ']':
            if (!s.empty() && s.top() == '[')
            {
                s.pop();
                count += 2;
            }
            break;
        }
    }

    if (s.empty())
    {
        return count;
    }
    else
    {
        // cout << "stack not balanced";
        return count;
    }
}

int longest_valid_substr(string expr)
{
    int length = expr.length();
    stack<int> s;
    s.push(-1);
    int result = 0;

    for(int i = 0; i < length; i ++){
        if(expr[i]=='(')
            s.push(i);
        else {
            if(!s.empty()){
                s.pop(); // to remove -1 from stack as now we have to ignore ')' brackets as thwy do not form any match
            }
            if(!s.empty()){
                result = max(result, i - s.top());
            }
            // If stack is empty. push current index as
            // base for next valid substring (if any), we calculate current longest from the top element. DRY run if doubt. 
            else s.push(i);
        }    
    }
    return result;
}

int optimised_substring(string s){
     int left = 0, right = 0, maxlength = 0;
 int n = s.length();
//  START TO END
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            left++;
        else
            right++;
 
        if (left == right)
            maxlength = max(maxlength, 2 * right);
 
        else if (right > left)
            left = right = 0;
    }
    left = right=0;
    // END TO START
    for (int i = n-1; i >=0; i--)
    {
        if (s[i] == '(')
            left++;
        else
            right++;
 
        if (left == right)
            maxlength = max(maxlength, 2 * right);
 
        else if (left > right)
            left = right = 0;
    }
    return maxlength;
}

int main()
{
    string expr = "(()()())";
    // int count = longest_valid_substr(expr);
    int count = optimised_substring(expr);
    cout << count;
}
