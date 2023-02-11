
import random
import time
def message():
    
    l = getRand()
    print(l)
    return(l)
   

#2477 X5531 Y5324 Z5535 I5496 J5499 K5558 S5500 F

def getRand():
    res = [0,0,0,0,0,0,0,0]

    res[7]=1
    
    for i in range(1,7):
        
        res[i]=round(random.uniform(-50, 50),2)
   

    return(res)
message()