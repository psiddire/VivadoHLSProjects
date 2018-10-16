import ROOT
import math

h1 = ROOT.TH1F("ADC", "ADC counts", 570, 0, 570)
h2 = ROOT.TH1F("Linearizer Output", "Linearizer Output", 570, 0, 570)
h3 = ROOT.TH1F("HLS Linearizer Output", "HLS Linearizer Output", 570, 0, 570)
h4 = ROOT.TH1F("Filter Output", "Filter Output", 570, 0, 570)
h5 = ROOT.TH1F("HLS Filter Output", "HLS Filter Output", 570, 0, 570)
h6 = ROOT.TH1F("Peak Finder Output", "Peak Finder Output", 570, 0, 570)
h7 = ROOT.TH1F("HLS Peak Finder Output", "HLS Peak Finder Output", 570, 0, 570)
h8 = ROOT.TH1F("Strip Format Output", "Strip Format Output", 570, 0, 570)
h9 = ROOT.TH1F("HLS Strip Format Output", "HLS Strip Format Output", 570, 0, 570)

#h = ROOT.TH2D("h", "Output vs ADC", 120, 180, 300, 90, 50, 140)
i = 0
f = open("InputsTPG.txt")
r = ROOT.TFile("Input.root", "RECREATE")
for line in f.readlines():
    word = line.split()
    adc = int(word[1])
    h1.SetBinContent(i, adc)
    i+=1

i = 0
fl = open("OutputLinearizer.txt")
for line in fl.readlines():
    word = line.split()
    for j in range(10):
        h2.SetBinContent(i, float(word[j]))
        i+=1

i = 0
ff = open("OutputFilter.txt")
for line in ff.readlines():
    word = line.split()
    for j in range(10):
        h4.SetBinContent(i, float(word[j]))
        i+=1

i = 0
fp = open("OutputPeak.txt")
for line in fp.readlines():
    word = line.split()
    for j in range(10):
        h6.SetBinContent(i, float(word[j]))
        i+=1

i = 0
fs = open("OutputStrip.txt")
for line in fs.readlines():
    word = line.split()
    for j in range(10):
        h8.SetBinContent(i, float(word[j]))
        i+=1

i = 0
fh = open("hlsoutput.txt")
for line in fh.readlines():
    word = line.split()
    h3.SetBinContent(i, float(word[0]))
    h5.SetBinContent(i, float(word[1]))
    h7.SetBinContent(i, float(word[2]))
    h9.SetBinContent(i, float(word[3]))
    i+=1


h1.Draw()
h1.Write()
h2.Draw()
h2.Write()
h3.Draw()
h3.Write()
h4.Draw()
h4.Write()
h5.Draw()
h5.Write()
h6.Draw()
h6.Write()
h7.Draw()
h7.Write()
h8.Draw()
h8.Write()
h9.Draw()
h9.Write()
r.Print()
