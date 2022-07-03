#define pir pair<int, string>
class cmp
    {
        public:
            bool operator()(const pir &a, const pir &b)
            {
                if (a.first == b.first)
                    return a.second < b.second;
                return a.first > b.first;
            }
    };
class Solution
{
    public:
        vector<string> topKFrequent(vector<string> &words, int k)
        {
            vector<string> ans(k);
            unordered_map<string, int> m;
            for (auto i: words)
            {
                m[i]++;
            }
            priority_queue<pir, vector < pir>, cmp> pq;
            for (auto i: m)
            {
                pq.push({ i.second,
                    i.first });
                if (pq.size() > k) pq.pop();
            }
            int temp = k - 1;
            while (!pq.empty())
            {
                ans[temp--] = pq.top().second;
                pq.pop();
            }
            return ans;
        }
};