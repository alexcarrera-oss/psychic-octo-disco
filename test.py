import getDataSim
import getTime

import time


now = getTime.now()

while(True):
    print(getDataSim.message(now))
    time.sleep(.1)

