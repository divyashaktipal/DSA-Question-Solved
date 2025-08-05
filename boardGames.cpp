#include<bits/stdc++.h>
using namespace std;

struct Cell {
    int x, y, dist;
};

int M, N;
vector<vector<int>> grid;
vector<vector<bool>> visited;

bool isValid(int x, int y) {
    return x >= 0 && y >= 0 && x < M && y < N && grid[x][y] == 0 && !visited[x][y];
}

int bfs(int sx, int sy, int dx, int dy, int movex, int movey) {
    queue<Cell> q;
    q.push({sx, sy, 0});
    visited[sx][sy] = true;

    vector<pair<int, int>> directions = {
        {movex, movey},         
        {movey, -movex},
        {-movey, movex},        
        {-movex, -movey}        
    };

    while (!q.empty()) {
        Cell current = q.front();
        q.pop();

        if (current.x == dx && current.y == dy) {
            return current.dist;
        }

        for (auto dir : directions) {
            int nx = current.x + dir.first;
            int ny = current.y + dir.second;

            if (isValid(nx, ny)) {
                visited[nx][ny] = true;
                q.push({nx, ny, current.dist + 1});
            }
        }
    }
    return -1; 
}

int main() {
    cin >> M >> N;
    grid = vector<vector<int>>(M, vector<int>(N));
    visited = vector<vector<bool>>(M, vector<bool>(N, false));

    for (int i = 0; i < M; ++i)
        for (int j = 0; j < N; ++j)
            cin >> grid[i][j];

    int sx, sy, dx, dy, movex, movey;
    cin >> sx >> sy;
    cin >> dx >> dy;
    cin >> movex >> movey;

    int result = bfs(sx, sy, dx, dy, movex, movey);
    cout << result << endl;

    return 0;
}
