class Solution(object):
    def runningSum(self, nums):
        i=0
        r=0
        while i<len(nums):
            r=nums[i]+r
            nums[i]=r
            
            i=i+1
            
        return nums
        """
        :type nums: List[int]
        :rtype: List[int]
        """