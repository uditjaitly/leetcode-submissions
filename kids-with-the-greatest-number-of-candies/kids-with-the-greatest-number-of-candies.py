class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        
        i=0
        maxm=-1
        result=[]
        while i<len(candies):
            if candies[i] > maxm:
                maxm=candies[i]    
            i=i+1
        
        i=0
        while i<len(candies):
            if candies[i]+extraCandies>=maxm:
                result.append(True)
            else:
                result.append(False)
            i=i+1
        
        
                
        return result    
            
            
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        