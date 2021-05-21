class Solution(object):
    def arraySign(self, nums):
        i=0
        negative_counter=0
        
        while i<len(nums):
            if(nums[i]<0):
               
                negative_counter=negative_counter+1
                print(negative_counter)
            if nums[i]==0 : 
                return 0
            i=i+1
        
        
     
        
        if negative_counter%2==0 :
            return 1
        elif negative_counter%2!=0:
            return -1
        
        
    
        
        
        
        """
        :type nums: List[int]
        :rtype: int
        """
        