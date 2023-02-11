import datetime
import time

def now():
    current_time = time.time()
    minu = datetime.datetime.now().minute
    sec = int(time.time()) % 60
    mil = round((int(current_time * 1000) % 1000)/100,0)
    res = round((minu*60 + sec + mil/10),1)
   
   # print(res)
    return(res)

now()
