import random
import time
dictp={0:'你个狗叉子',1:'哎',2:'太过分了',3:'我草死你猴子的',4:'不是',5:'那不行'}
i=4
while 1:
    i=random.randint(0,5)
    #if i ==6:
        #break
    print(dictp[i])
    time.sleep(0.5)
