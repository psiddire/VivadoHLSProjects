i = 0
with open('inputfileComp1.txt', 'w') as inf:
    f = open('inputfile.txt')
    for line in f.readlines():
        if i%2==0:
            word = line.split()
            newline = '0x0 '+word[1]+'\n'
            inf.write(newline)
        else:
            inf.write(line)
        i = i + 1

