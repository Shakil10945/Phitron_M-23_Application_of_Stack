#include<bits/stdc++.h>
#include"TMyStack.h"

using namespace std;

void reverseSentence(string chk)
{
    Stack <string> st;

    for(int i=0;i<chk.length();i++)
    {
        string word = "";

        while(i<chk.length() && chk[i] != ' ')
        {
            word+=chk[i];
            cout<< chk[i]<<endl;
            i++;
        }
        st.push(word);
    }

    while(!st.empty())
    {
        cout<< st.Top()<<" ";
        st.pop();
    }
}
int main()
{
    string S = "I am Shakil Khan";
    reverseSentence(S);
    return 0;
}
