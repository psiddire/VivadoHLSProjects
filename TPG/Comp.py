import ROOT
import math

h1 = ROOT.TH1F("HLS Filter Output", "HLS Filter Output", 570, 0, 570)
h2 = ROOT.TH1F("HLS Compression Even Filter Output", "HLS Compression Even Filter Output", 570, 0, 570)
h3 = ROOT.TH1F("HLS Compression Odd Filter Output", "HLS Compression Odd Filter Output", 570, 0, 570)

f = ROOT.TFile("Comp.root", "RECREATE")

i = 0
f1 = open("hls.txt")
for line in f1.readlines():
    word = line.split()
    h1.SetBinContent(i, float(word[0]))
    i+=1

i = 0
f2 = open("hlsComp.txt")
for line in f2.readlines():
    word = line.split()
    h2.SetBinContent(i, float(word[0]))
    i+=1

i = 0
f3 = open("hlsComp1.txt")
for line in f3.readlines():
    word = line.split()
    h3.SetBinContent(i, float(word[0]))
    i+=1


h1.Draw()
h1.Write()
h2.Draw()
h2.Write()
h3.Draw()
h3.Write()

f.Print()
