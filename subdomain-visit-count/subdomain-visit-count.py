class Solution(object):
    def subdomainVisits(self, cpdomains):
        result={}
        final=[]
        i=0
        while i<len(cpdomains):
            temp=cpdomains[i].split(' ')
            number=int(temp[0])
            domainName=temp[1]
            numberDots=domainName.count('.')
            
            if numberDots==1:
                
                if result.get(domainName)==None:
                    result[domainName]=number
                else:
                     result[domainName]=result[domainName] + number
                    
                subDomainName=domainName.split('.',1)
                if(result.get(subDomainName[1])==None):
                    result[subDomainName[1]]=number
                else:
                    result[subDomainName[1]]=result[subDomainName[1]] + number
                
                
            
            if numberDots==2:
                
                if result.get(domainName) == None:
                    result[domainName]=number
                else:
                    result[domainName]=result[domainName] + number
                
                subDomainName=domainName.split('.',1)
                if(result.get(subDomainName[1])==None):
                    result[subDomainName[1]]=number
                else:
                    result[subDomainName[1]]=result[subDomainName[1]] + number
                    
                
                subDomainName=domainName.split('.',2)
                if(result.get(subDomainName[2])==None):
                    result[subDomainName[2]]=number
                else:
                    result[subDomainName[2]]=result[subDomainName[2]] + number
       
            
            i=i+1
        
        for key, value in result.items():
            final.append(str(value) + " " + key)
        
        print(result)
        return final   
        """
        :type cpdomains: List[str]
        :rtype: List[str]
        """
        