with open('inputfile.txt', 'w') as inf:
    f = open('Chain_withSignal_100evts.txt')
    for line in f.readlines():
        word = line.split()
        if len(word)==5:
            inf.write(line)

