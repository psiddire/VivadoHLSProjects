flagl = False
flagf = False
flagp = False
flags = False

with open('OutputLinearizer.txt', 'w') as lf:
    with open('OutputFilter.txt', 'w') as ff:
        with open('OutputPeak.txt', 'w') as pf:
            with open('OutputStrip.txt', 'w') as sf:
                f = open('Chain_withSignal_100evts.txt')
                for line in f.readlines():
                    word = line.split()
                    if word[2]=="linearizer":
                        flagl = True
                        continue
                    elif word[2]=="filter":
                        flagf =True
                        continue
                    elif word[2]=="peakfinder":
                        flagp =True
                        continue
                    elif word[2]=="formatter":
                        flags =True
                        continue
                    else:
                        if flagl==True:
                            lf.write(line)
                            flagl = False
                        if flagf==True:
                            ff.write(line)
                            flagf = False
                        if flagp==True:
                            pf.write(line)
                            flagp = False
                        if flags==True:
                            sf.write(line)
                            flags = False
