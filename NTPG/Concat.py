filenames = ['inputfileNew.txt', 'inputfileNew1.txt']
with open('infile.txt', 'w') as outfile:
    for fname in filenames:
        with open(fname) as infile:
            for line in infile:
                outfile.write(line)
