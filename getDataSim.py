
import random
import time
import datetime
import getTime





def message(now):
    
    l = getRand(now)
   
    return(l)
   

def getRand(n):
    res = [0,0,0,0,0,0,0,0]

    res[0]= round(getTime.now()-n,1)
    res[7]=1
    
    for i in range(1,7):
        
        res[i]=round(random.uniform(-50, 50),1)

    return(res)

