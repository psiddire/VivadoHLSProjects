with open('inputfileNew1.txt', 'w') as inf:
    f = open('inputfile.txt')
    for line in f.readlines():
        word = line.split()
        inf.write(word[1])
        inf.write(', ')
