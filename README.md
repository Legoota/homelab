# Homelab

Homemade server to learn clustering, services, all of that in a sleeper case enhanced with Arduino

## Goals

 * Create a Raspberry Pi cluster running Kubernetes
 * Monitor the cluster from a webservice (Grafana ?)
 * Monitor the cluster from the case (display in the case, selectors to choose what to display)
 * Have a Plex up & running
 * Have a nextcloud
 * Install PiHole
 
 ## Checklist
 ### Buyings
- [x] Get an old amp (*Technics SU V2A*)
- [x] Get Raspberry Pi (*4x Raspberry Pi 4s*)
- [x] Get a powersupply (*Omron 75W SMPS*)
- [x] Get storage (*4x Kingston SSDs*)
- [x] Get a switch (*random Netgear switch*)
- [x] Get wiring (*Ethernet cables*, *SSD to USB3 cables*, *power supply cables*, *...*)

### Cluster setup
- [x] Configure all Raspberries to boot on SSD, update + create NFS shares
- [ ] Configure K3S on master + 3 nodes
- [ ] Configure Nextcloud
- [ ] Configure Plex
- [ ] Copy existing media libraries to Plex PVC
- [ ] Configure PiHole

### Hardware setup
- [x] Open and empty the amp
- [x] Desolder the switches, knobs and selector from the main PCB
- [x] Fit everything in the amp

### Case retro-engineering
- [x] Retro-engineer every switch, knob and selector from the old amp
- [x] Create data bridge to send info between Raspberry and cluster master
- [x] RGB led status on "New class A" logo
- [x] Retrofit an OLED or white LCD display to show info from Arduino
- [ ] ~~Get positions from selectors to choose which info to display & from which Raspberry~~
- [x] On/Off button to power the display and LED
