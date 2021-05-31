class Solution(object):
    def isValid(self, s):
        stack=[]
        
        i=0
        
        while i<len(s):
            if len(stack)==0:
                stack.append(s[i])
            elif len(stack) > 0 and (s[i]=='(' or s[i]=='{' or s[i]=='['):
                stack.append(s[i])
            elif len(stack) > 0 and (s[i]==')' or s[i]=='}' or s[i]==']' ):
                if s[i]==')' and stack[len(stack)-1]=='(':
                    stack.pop()
                elif s[i]=='}' and stack[len(stack)-1]=='{':
                    stack.pop()
                elif s[i]==']' and stack[len(stack)-1]=='[':
                    stack.pop()
                else: 
                    stack.append(s[i])
          
                
            i=i+1
                    
                    
        if len(stack)==0:
            return True
        else:
            return False
                    
        
        
        """
        :type s: str
        :rtype: bool
        """
        # ([])