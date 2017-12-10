## Overview

This is a Mongoose OS app for the ESP32 Heltec WifiKit or ESP32 Heltec Lora with OLED.   It should work with other IOT boards connected to a SSD1306 over I2C by changing the `mos.yml` config settings.

It removes the default adafruit logo and allows dynamic bitmap loading via Javascript (just
create a Base64 string with [image converter](https://www.espruino.com/Image+Converter)).

## 1. Install MOS

``` bash
curl -fsSL https://mongoose-os.com/downloads/mos/install.sh | /bin/bash
~/.mos/bin/mos --help      
~/.mos/bin/mos
```

## 2. Install to MOS application folder

``` bash
cd ~/.mos/apps.1.21
git clone https://github.com/OffGridNetworks/mos-esp32-oled.git
cd mos-esp32-oled
mos build --platform esp32 && flash
```