with open('output.txt', 'w') as inf:
    f = open('OutputFilter.txt')
    for line in f.readlines():
        word = line.split()
        for i in range(len(word)):
            inf.write(word[i]+'\n')
