#include <bits/stdc++.h>

void subSequences(string str, string &st, int index, int size, vector<string> &ans)
{
    if (index == size)
    {
        if (st.length() == 0)
        {
            return;
        }
        ans.push_back(st);
        return;
    }
    st = st + str[index];
    subSequences(str, st, index + 1, size, ans);
    st.resize(st.size() - 1);
    subSequences(str, st, index + 1, size, ans);
}

vector<string> subsequences(string str)
{

    vector<string> ans;
    string st = "";
    subSequences(str, st, 0, str.length(), ans);
    return ans;
}
