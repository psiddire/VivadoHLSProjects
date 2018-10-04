with open('inputfile.txt', 'w') as fi:
    f = open('output.txt')
    for line in f.readlines():
        word = line.split()
        h = hex(int(word[0]))
        fi.write(h)
        fi.write('\n')
        
