class Solution(object):
    def arrayRankTransform(self, arr):
        if not arr:
            return []
        sorted_arr = sorted(arr)

        rankmap = {}
        curr_rank = 1
        for num in sorted_arr:
            if num not in rankmap:
                rankmap[num] = curr_rank
                curr_rank += 1
                
        return [rankmap[num] for num in arr]
        