# Set of hacks to connect an WS2812-based LED matrix to an openWRT router

* LuCI page to configure a text to show
* python script to kleep watching the config file and send new text to UART
* UART connection to an Arduino Nano
* WS2812 driver on the Arduino

Connection diagram:

```
                           electric switch
                                 |
LED matrix <-------- Arduino <---|--- Router <-----> Your PC
             WS2812            UART            LAN
```

# Getting started

Unfortunately, the router seems not to like the UART connection when booting,
so it has to be cut off using the electric switch during startup.

After the router is up (which takes about a minute) and *before* the next
step, the UART needs to be re-connected.

Then, connect to the router via SSH (password see inner side of lid) and
start the Python script that forwards the text to the Arduino via UART:

```
ssh root@192.168.23.202
root@OpenWrt:~# python3 matrixdisplay_set.py
```

Now, you \#should be able to set your own text via the router's web interface
(System -> Matrix Display). Up to 300 characters are allowed.

# License

Copyright 2022 Urban Jacobs, Martin Gritzan

Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
of the Software, and to permit persons to whom the Software is furnished to do
so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
