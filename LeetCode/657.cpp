//Link: https://leetcode.com/problems/robot-return-to-origin/

class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        for(auto move : moves) {
            if(move == 'R') x++;
            else if(move == 'L') x--;
            else if(move == 'U') y++;
            else if(move == 'D') y--;
        }
	return x == 0 && y == 0;
    }
};
