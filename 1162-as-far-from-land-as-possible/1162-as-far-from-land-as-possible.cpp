class Solution {
public:
int maxDistance(vector<vector<int>>& grid) {
        int res = 0;
        queue<pair<pair<int, int>, int> > q;
        for (int i = 0; i < grid.size(); i++){
            for (int j = 0; j < grid[0].size(); j++){
                if (grid[i][j] == 1) q.push(make_pair(make_pair(i, j), 1));
                grid[i][j] = 0;
            }
        }

        while (!q.empty()){
            pair<int, int> p = q.front().first;
            int z = q.front().second;
            q.pop();
            if (grid[p.first][p.second] != 0) continue;
            res = z;
            grid[p.first][p.second] = z;
            z++;
            if (p.first < grid.size()-1) q.push(make_pair(make_pair(p.first+1, p.second), z));
            if (p.first > 0)q.push(make_pair(make_pair(p.first-1, p.second), z));
            if (p.second < grid[0].size()-1)q.push(make_pair(make_pair(p.first, p.second+1), z));
            if (p.second > 0)q.push(make_pair(make_pair(p.first, p.second-1), z));
        }
        if (res == 1) return -1;
        return res-1;
    }
};