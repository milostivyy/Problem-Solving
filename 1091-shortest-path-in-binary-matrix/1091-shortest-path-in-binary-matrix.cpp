class Solution {
public:

	int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
		int m = grid.size();
		int n = grid[0].size();

		int rDir[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
		int cDir[8] = {0, 1, 1, 1, 0, -1, -1, -1};

		if(grid[0][0] == 1) return -1;

		queue<pair<int, int>> q;

		grid[0][0] = 1;
		q.push(make_pair(0, 0));

		int ans = 1;

		while(q.size() > 0) {
			int len = q.size();

			for(int i=0; i<len; i++) {
				int r = q.front().first;
				int c = q.front().second;
				q.pop();

				if(r == m-1 && c == n-1) return ans;

				for(int k=0; k<8; k++) {
					int nR = r + rDir[k];
					int nC = c + cDir[k];

					if(nR < 0 || nR >= m || nC < 0 || nC >= n || grid[nR][nC] == 1) continue;

					grid[nR][nC] = 1;
					q.push(make_pair(nR, nC));
				}

			}

			ans++;
		}

		return -1;
	}
};