#Link: https://leetcode.com/problems/jewels-and-stones/

class Solution(object):
    def numJewelsInStones(self, J, S):
        """
        :type J: str
        :type S: str
        :rtype: int
        """
        count = 0
        for i in J:
            count += S.count(i)
        return count
        