with open('inputfile.txt', 'w') as inf:
    f = open('Chain_OneEvents_300channels.txt')
    for line in f.readlines():
        word = line.split()
        if len(word)==5:
            inf.write(line)

