#!/usr/bin/python3
import os
import serial
from time import sleep

CFGFILE = '/etc/config/matrixdisplay'
SERIALIFACE = '/dev/ttyS0'

lastchange=0

while True:
    changed = os.path.getmtime(CFGFILE)
    if changed != lastchange:
        lastchange = changed
        content = ""
        with open(CFGFILE, 'r') as f:
            content = f.read()

        text = content.split("'")[3] # now this is a bit of a hack, of course, but well...

        with serial.Serial(SERIALIFACE, 115200) as s:
            s.write(b'iLAB' + text.encode('ascii') + b'\n')

        print("text changed to \"{}\"".format(text))

    sleep(10)
