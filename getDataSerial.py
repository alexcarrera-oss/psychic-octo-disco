import serial

ser = serial.Serial("COM7", 9600)  # open serial port

def message():
    line = ser.readline().decode()

    
    k = str_to_list(line)

    l = treat(k)
    return(l)
    #r = resulta()

#2477 X5531 Y5324 Z5535 I5496 J5499 K5558 S5500 F

def treat(k):  # normalise les valeurs
    i = 0
    res = []
    para = [1000,5500]
    if(not("NaN" in k)):
        for j in k:
            
            if(i == 0):
                res.append(((int(j)-para[i]))/10)
            
                i =  1
            else:
                res.append((int(j)-para[i])/10)

    return(res)

def str_to_list(m): #segmente le message et verifie contenu/taille
    
    ref = ["X","Y","Z","I","J","K","S","F"] #8
    out = []
    k = ""
    i = 0
    q = True
    taille = (len(ref))*5
    restemp: str = ""
 
    for n in m:
        if(n.isdigit() or n in ref):
            k = k + n
            


    for j in k:
        if(len(k)!=taille):
            q = False
            #print("Erreurl", i)
            return(["NaN","NaN","NaN","NaN","NaN"])

        if(k[taille-1]!=ref[-1]):
            q = False
        if(q):
            if(ref[i]==j):
                if(len(restemp)!=4):
                    q = False
                else:
                    if(restemp.isdigit()):                     
                        if(int(restemp)>=100):
                            out.append(restemp)
                            i = i + 1
                            restemp =""
                        else:  
                            q = False
                    else:
                        q = False
                        
                        i = i + 1
            else:
                if(j.isdigit()):
                    restemp = restemp + j
                else:            
                    q = False                 
        else:
            #print("Erreur 3", i)
            return(["NaN","NaN","NaN","NaN","NaN"])
    if(len(out)==len(ref)):
        
        return(out)
    else:
        q = False
        #print("Erreur Taille 2", i)
        return(["NaN","NaN","NaN","NaN","NaN"])
    

