#include<bits/stdc++.h>
#include "TMyStack.h"

using namespace std;

int main()
{
    Stack <pair<int,char>> st;
    st.push(make_pair(88,'A'));
    st.push(make_pair(55,'K'));
    st.push(make_pair(66,'H'));
    st.push(make_pair(44,'T'));
    st.push(make_pair(22,'Q'));

 while(!st.empty())
    {
       pair <int,char> chk;
       chk = st.pop();
       cout<< chk.first << " | "<< chk.second << endl;
    } 
    if(!st.empty())
    {
        pair <int,char> chk;

        chk = st.Top();
        
        cout<< chk.first <<  " | " << chk.second << endl;
    }

    cout<< "Size==="<< st.size()<<endl;



    return 0;

}
