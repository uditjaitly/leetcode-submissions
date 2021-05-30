class Solution(object):
    def twoSum(self, nums, target):
        output=[]
        for i in range(0,len(nums)):
            for j in range(0,len(nums)):
                if i!= j:
                    if nums[i]+ nums[j]==target:
                        output.append(i)
                        output.append(j)
                        return output
            
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        