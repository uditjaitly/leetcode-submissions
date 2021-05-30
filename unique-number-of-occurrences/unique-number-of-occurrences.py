class Solution(object):
    def uniqueOccurrences(self, arr):
        count={}
        tracker=set()
        i=0
        while i<len(arr):
            if arr[i] in count:
                count[arr[i]]=count[arr[i]]+1
            else:
                count[arr[i]]=1
            i=i+1
            
        for value in count.itervalues():
            if value in tracker:
                return False
            else:
                tracker.add(value)
            
        return True
        
        """
        :type arr: List[int]
        :rtype: bool
        """
        