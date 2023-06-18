# Casing

This folder is used to store photos, schemas, code for the amp case part of the homelab.

## Idea

I decided to use a vintage Hifi amp for the casing, because I enjoy these a lot and I find them nice and more displayable than a custom rack.

The specifications of the amp were the following:
* Enough space to fit 4x Raspberry Pi 4s, 4x SSDs, a switch and power supply
* Discreet holes to let out the heat
* Physical buttons and selectors to reuse
* A display, or a place to put a display
* A nice front panel

I searched for broken amps to find a suitable candidate for my homelab, and I found a Technics SU-V2A, which is ideal because of the multiple front panel buttons, selectors, and potentiometers. Moreover, it has a translucent "New Class A" logo on the bottom right which I can reuse. It also has a small screen.

I completely emptied the case by desoldering every button and parts from the main PCBs.

After finding the repair manual online, I reverse engineered every button and selector, to reuse them in the new system.

## Final product

After gathering every component I needed, I worked on the fitting of everything inside the case.

This amp, compared to other similar amps is not very long, meaning I had to work on a fitting that was not too spatious in order to keep place for buttons and Arduino-related parts.

I decided to place the +230V and the Ethernet passthrough on the bottom left. Next to them, the 5-port switch that is held in place with a small piece of metal recycled from the components I removed during first inspection of the amp. I placed the SMPS on top of the switch to gain space, help the airflow and let the generated hot air out easily.

On the right part, I set the 4 SSD stack on the backplate of the amp, and next to it is the 4 Raspberry Pi 4 stack. I positionned it a bit behind the SSD stack to have some space for the USB-C ports that are used to power up the boards.

The whole front part is used by Arduino-related components: Mega2560, Relay module, OLED screen, RGB led, and switches.