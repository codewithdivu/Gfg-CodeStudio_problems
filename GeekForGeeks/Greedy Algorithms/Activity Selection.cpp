class Solution
{
public:
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        vector<pair<int, int>> ans;

        for (int i = 0; i < n; i++)
        {
            pair<int, int> p = make_pair(end[i], start[i]);
            ans.push_back(p);
        }

        sort(ans.begin(), ans.end());
        int count = 1;
        int meetingEnd = ans[0].first;

        for (int i = 1; i < n; i++)
        {
            if (ans[i].second > meetingEnd)
            {
                count++;
                meetingEnd = ans[i].first;
            }
        }

        return count;
    }
};
