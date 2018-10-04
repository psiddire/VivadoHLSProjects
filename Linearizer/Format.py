i = 1
with open('InputsLinearizer.txt', 'w') as of:
    f = open('InputsToLinearizer.txt')
    for line in f.readlines():
        word = line.split()
        print word[0]
        if word[0]=="EcalTPG" or len(word)==10:                                                                                                                                                                                                                                 
            i+=1                                                                                                                                                                                                                                                                
        else:                                                                                                                                                                                                                                                                   
            of.write(line) 
