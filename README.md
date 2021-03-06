# Project Embedded Systems

## Installing & Running Basestation

### Linux (Debian-based)

#### Installing

```
sudo apt install python3-venv
cd Basestation/
python3 -m venv venv
source venv/bin/activate
pip install -r requirements.txt
```

#### Groups

To make serial-communication work using pySerial your local user has to be part of the `dialout` group. You can check this using the `groups` command. If not, add your user to the dialout group:

```
sudo usermod -a -G dialout USERNAME
```

#### Running

```
cd Basestation/
source venv/bin/activate
python3 main.py
```

### Windows

#### Installing

```
cd Basestation/
python -m venv venv
venv\Scripts\activate  
pip install -r requirements.txt
```

#### Running

```
cd Basestation/
venv\Scripts\activate  
python main.py
```

## Generating Unit Firmware

### Windows

#### Compiling

* Open Atmel Studio.
* Build using the following:
	- Press F7.
	- Or open the build drop down and press build in the taskbar.

#### Flashing

* Install avrdude.
* Add avrdude to system path.
* Fill in and use the following command: avrdude -C "PATH TO AVRDUDE\avrdude\avrdude.conf" -p atmega328p -c arduino -P COM -b 115200 -U flash:w:"PATH TO .hex FILE":i
	- COM stands for port, ranges from COM0 to for example COM6.

### Linux (Debian-based)

#### Compiling

```
sudo apt install gcc-avr
cd Unit/
make
```

#### Flashing

```
sudo apt install avrdude
cd Unit/
make COM=/dev/ttyACM0 flash # where ttyACM0 is your com-dev
```

## Arduino schematics

![](https://i.imgur.com/wYyTmsN.png)
