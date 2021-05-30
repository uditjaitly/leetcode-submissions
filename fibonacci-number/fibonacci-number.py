class Solution(object):
    def fib(self, n):
        seq=[]
        seq.append(0)
        seq.append(1)
        i=2
        
        while i<=n:
            seq.append(seq[i-2]+seq[i-1])
            i=i+1
        
        return seq[n]
        
        
        
        """
        :type n: int
        :rtype: int
        """
        