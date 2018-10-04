import ROOT
import math

h1 = ROOT.TH1F("h1", "ADC counts", 1000, 0, 1000)
h2 = ROOT.TH1F("h2", "Output", 1000, 0, 1000)
h = ROOT.TH2D("h", "Output vs ADC", 120, 180, 300, 90, 50, 140)
i = 0
f = open("InputsLinearizer.txt")
r = ROOT.TFile("Input.root", "RECREATE")
for line in f.readlines():
    word = line.split()
    if len(word)==5:                                                                                                                                                                                                                                 
        adc = int(word[1])
        h1.SetBinContent(int(math.floor(i/2)), adc)
    else:
        out = int(word[0])
        h2.SetBinContent(int(math.floor(i/2)), out)
        h.Fill(adc, out)
    i+=1

h1.Draw()
h1.Write()
h2.Draw()
h2.Write()
h.Draw()
h.Write()
r.Print()
