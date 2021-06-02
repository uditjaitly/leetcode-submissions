class Solution(object):
    def runningSum(self, nums):
        i=0
        curr=0
        res=[]
        while i < len(nums):
            curr=nums[i] + curr
            res.append(curr)
            i=i+1
        
        return res
        """
        :type nums: List[int]
        :rtype: List[int]
        """