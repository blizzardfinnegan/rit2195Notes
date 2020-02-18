<Qucs Schematic 0.0.21>
<Properties>
  <View=0,0,800,800,1,0,0>
  <Grid=10,10,1>
  <DataSet=invertingOpAmp.dat>
  <DataDisplay=invertingOpAmp.dpl>
  <OpenDisplay=1>
  <Script=invertingOpAmp.m>
  <RunScript=0>
  <showFrame=0>
  <FrameText0=Title>
  <FrameText1=Drawn By:>
  <FrameText2=Date:>
  <FrameText3=Revision:>
</Properties>
<Symbol>
  <.PortSym 40 20 2 0>
  <.PortSym 40 60 1 0>
</Symbol>
<Components>
  <OpAmp OP1 5 360 360 -26 -80 1 0 "1e6" 0 "15 V" 0>
  <R Rf 1 380 270 -26 15 0 0 "50 Ohm" 0 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "US" 0>
  <R Ri 1 270 340 -26 15 0 0 "50 Ohm" 0 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "US" 0>
  <Port Vo 1 450 360 4 -31 0 2 "2" 0 "analog" 0 "v" 0 "" 0>
  <GND * 1 320 390 0 0 0 0>
  <Port Vin 1 230 340 -23 12 0 0 "1" 0 "analog" 0 "v" 0 "" 0>
</Components>
<Wires>
  <400 360 420 360 "" 0 0 0 "">
  <420 360 450 360 "" 0 0 0 "">
  <420 270 420 360 "" 0 0 0 "">
  <410 270 420 270 "" 0 0 0 "">
  <330 270 330 340 "" 0 0 0 "">
  <330 270 350 270 "" 0 0 0 "">
  <300 340 330 340 "" 0 0 0 "">
  <320 380 320 390 "" 0 0 0 "">
  <320 380 330 380 "" 0 0 0 "">
  <230 340 240 340 "" 0 0 0 "">
</Wires>
<Diagrams>
</Diagrams>
<Paintings>
</Paintings>
