class Solution(object):
    def defangIPaddr(self, address):
        res=""
        i=0
        
        while i<len(address):
            if address[i]!= '.':
                res=res+address[i]
            else:
                res=res + "[.]"
            
            i=i+1
            
            
        return res
        
        
        """
        :type address: str
        :rtype: str
        """
        