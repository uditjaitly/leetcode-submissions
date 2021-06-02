class Solution(object):
    def isPalindrome(self, s):
        i=0
        store=""
        while i < len(s):
            if s[i].isalpha() or s[i].isnumeric():
                store=store + s[i]
            i=i+1
            
        store=store.lower()
        
        i=0
        j=len(store)-1
        
        while j>=0 and i<len(store):
            if store[i]!=store[j]:
               
                return False    
            
            i=i+1
            j=j-1
        
        return True
        
        """
        :type s: str
        :rtype: bool
        """
        