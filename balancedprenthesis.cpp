#include<iostream>
#include<stack>
using namespace std;
/*
char transform(char c)
{
    if (c==')')
    {
        c='(';
        return c;
    }
    else if(c=='}')
    {
        c='{';
        return c;
    }
    else if(c==']')
    {
        c='[';
        return c;
    }
}
bool prenthesischecker(string s)
{
    stack<char>st;
    for (int i = 0; i < s.length(); i++)
    {   
        s[i]=transform(s[i]);
        if (st.empty())
        {
            st.push(s[i]);
        }
        else if (s[i]==st.top())
        {
            st.pop();
        }
        else 
        {
            st.push(s[i]);
        }
    }
    if (st.empty())
    {
        cout<<"yes";
        return true;
    }
    cout<<"no";
    return false;
}
int main()
{
    string s="12344321";
    cout<<prenthesischecker(s);
    return 0;
}
*/
bool prenthesischeck(string s)
{
    stack<char>st;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == '(' || s[i] == '['|| s[i] == '{')
        {
            // Push the element in the stack
            //cout<<s[i];
            st.push(s[i]);
            continue;
        }
        if (st.empty())
        {
            //cout<<"false"<<endl;
            return false;
        }
        if (s[i] == ')')
        {
            if (st.top()=='(')
            {
                st.pop();
            }
            else
            {
                //cout<<"false1"<<endl;
                return false;
            }
        }
        else if (s[i]=='}')
        {
            if (st.top()=='{')
            {
                st.pop();
            }
            else
            {
                //cout<<"false2"<<endl;
                return false;
            }
        }
        else if (s[i]==']')
        {
            {
            if (st.top()=='[')
            {
                st.pop();
            }
            else
            {
                //cout<<"false3"<<endl;
                return false;
            }
        }       
    }
    }
    if(st.empty())
    {
        return true;
    }
    //cout<<"false4"<<endl;
    return false;
}
int main()
{
    string s="{[()]}";
    if(prenthesischeck(s))
    {
        cout<<"balanced";
    }
    else
    {
        cout<<"unbalanced";
    }
    
    return 0;
}