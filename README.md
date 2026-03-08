# QuickPad
A 5 key macro pad with a rotary encoder that is made in order to enhance productivity when working in documents (ex. copy and paste commands). There is a little extrusion on the top of the macropad, and it's intended for you to put a little figurine or anything of your choice on it (acts as a mini stand)!

I made this macropad in order to refresh my memory on schematic and also PCB design, as the last time I touched this was probably 1-2 months ago. I would say I learned a lot throughout the process and I really enjoyed it! Just in general, I feel like it was a really good project for me to get back into the groove with electronics, etc, so I'm looking forward to using this experience for more advanced future projects!

<img width="1557" height="802" alt="Case1" src="https://github.com/user-attachments/assets/309e9f41-4c92-4115-a4d8-3ccf547cd61d" />

# PCB
I used KiCAD for basically everything (schematic to pcb design). When I exported for gerbers I used the JLCPCB plugin!
(I didn't use a matrix layout as I had enough pins for all the features, if you are adding more keys or rotary encoders I suggest you use a matrix layout!)

- Schematic
- <img width="966" height="525" alt="Schematic" src="https://github.com/user-attachments/assets/0fcb0369-b5d6-4450-ae90-4624907a2a7c" />
- PCB with zones
- <img width="600" height="622" alt="PCB-with-Zones" src="https://github.com/user-attachments/assets/c8054667-d9ce-4eb3-93e1-9419ff5e8240" />
- PCB without zones
- <img width="600" height="622" alt="PCB-without-Zones" src="https://github.com/user-attachments/assets/d6abdd7b-5dcf-4625-87a8-ad6e7aa3a176" />

# QuickPad Case
I used AutoDesk Inventor in order to make the case of the macropad. The main reason I chose this was because I already had a lot of experience using this software. If you're a beginner to 3d modeling I would suggest learning and using Onshape, AutoDesk Fusion 360, or AutoDesk Inventor.

- The middle plate (or the top cover)
- <img width="1034" height="693" alt="Middle" src="https://github.com/user-attachments/assets/b5f0324f-6e44-4607-a05d-40cfe1467a41" />
- Bottom
- <img width="1356" height="765" alt="Bottom" src="https://github.com/user-attachments/assets/febabbdf-0c5b-47f8-a448-eb653967f927" />

# Firmware
For QuickPad's firmware I used QMK. QuickPad contains the following features:
- VIA support
- RBG lighting (Pink)
- 5 keys to enhance productivity on documents
- Rotary Encoder for volume controll

(These can all be changed through qmk if needed)

# BOM (Bill of Materials)
Please keep in mind the case and rotary encoder knob are all 3d printed.

| Quantity | Material |
|---|---|
|1|Seeed XIAO RP2040|
|5|MX-Style Switches|
|5|Pink Blank DSA keycaps|
|5|SK6812 MINI-E LEDs|
|1|EC11 Rotary encoder|
|4|M3x16mm screws|






