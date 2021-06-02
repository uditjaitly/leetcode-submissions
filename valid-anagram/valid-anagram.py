class Solution(object):
    def isAnagram(self, s, t):
        counter={}
        i=0
        
        while i<len(s):
            if counter.get(s[i]) == None:
                counter[s[i]]=1
            else:
                counter[s[i]]=counter[s[i]]+1
            i=i+1
        i=0        
        while i < len(t):
            if counter.get(t[i]) == None:
                return False
            else:
                counter[t[i]]=counter[t[i]]-1
            i=i+1
            
            
        for key,value in counter.iteritems():
            if value != 0:
                return False
        
     
        return True
        
        
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        