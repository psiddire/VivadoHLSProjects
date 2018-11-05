i = 1;
with open('inputfile10.txt', 'w') as inf:
    f = open('inputfile.txt')
    for line in f.readlines():
        if (i%10 == 0):
            inf.write(line)
        i = i + 1

