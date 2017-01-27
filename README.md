# NoximGUI

NoximGUI is a graphical user interface built with open-source Qt framework libraries. This GUI interfaces with [Noxim](https://github.com/davidepatti/noxim), an interconnection network simulation based in SystemC and created by the University of Catania, Italy.

Features of NoximGUI include:
  - Intuitive structure and organization for viewing configuration parameters
  - Convenience functions such as loading and saving configurations, including power configurations, as well as printing the simulation output for inclusion in reports
  - (Hopefully) eases working with Noxim

### To Install
Currently, packages are only being statically compiled for Ubuntu 16.04 (Xenial Xerus), 64-bit OS. Instructions for installing this GUI as well as Noxim on different Linux flavors or OS's is not currently included in the docs (although the Development section may work), and the user does so at his/her own risk.

For the statically compiled packages, visit https://mvxt.me/ and scroll down to find the NoximGUI entry in the portfolio. Click on it, and then scroll down to the bottom of the modal to find the latest version(s) of NoximGUI, statically compiled. Simply extract this directory to a location of your choice. As long as you have downloaded and installed Noxim and SystemC, NoximGUI should work out-of-box.

### Credits & Libraries Used
* [Noxim](https://github.com/davidepatti/noxim)
  * V. Catania, A. Mineo, S. Monteleone, M. Palesi, D. Patti. Noxim: An Open, Extensible and Cycle-accurate Network on Chip Simulator. IEEE International Conference on Application-specific Systems, Architectures and Processors 2015. July 27-29, 2015, Toronto, Canada.
  * LGPL License
* [yaml-cpp](https://github.com/jbeder/yaml-cpp)
  * Copyright (c) 2008-2015 Jesse Beder
  * MIT License
 
