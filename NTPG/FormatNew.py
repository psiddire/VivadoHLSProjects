with open('inputfile.txt', 'w') as fi:
    f = open('InputsTPG.txt')
    for line in f.readlines():
        word = line.split()
        h1 = hex(int(word[0])<<12)
        h2 = hex(int(word[1]))
        fi.write(hex(int(h1, 16)+int(h2, 16)))
        fi.write(' ')
        h3 = hex(int(word[2]))
        h4 = hex(int(word[3])<<12)
        h5 = hex(int(word[4])<<16)
        fi.write(hex(int(h3, 16)+int(h4, 16)+int(h5, 16)))
        fi.write(' \n')
