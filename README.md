# Espressif IoT Development Framework

[![alt text](https://readthedocs.org/projects/docs/badge/?version=latest "Documentation Status")](https://docs.espressif.com/projects/esp-idf/en/latest/?badge=latest)

ESP-IDF is the official development framework for the [ESP32](https://espressif.com/en/products/hardware/esp32/overview) chip.

# Developing With the ESP-IDF

## Setting Up ESP-IDF

See setup guides for detailed instructions to set up the ESP-IDF:

* [Windows Setup Guide](https://docs.espressif.com/projects/esp-idf/en/latest/get-started/windows-setup.html)
* [Mac OS Setup Guide](https://docs.espressif.com/projects/esp-idf/en/latest/get-started/macos-setup.html)
* [Linux Setup Guide](https://docs.espressif.com/projects/esp-idf/en/latest/get-started/linux-setup.html)

## Configuring the Project

`make menuconfig`

* Opens a text-based configuration menu for the project.
* Use up & down arrow keys to navigate the menu.
* Use Enter key to go into a submenu, Escape key to go out or to exit.
* Type `?` to see a help screen. Enter key exits the help screen.
* Use Space key, or `Y` and `N` keys to enable (Yes) and disable (No) configuration items with checkboxes "`[*]`"
* Pressing `?` while highlighting a configuration item displays help about that item.
* Type `/` to search the configuration items.

Once done configuring, press Escape multiple times to exit and say "Yes" to save the new configuration when prompted.

## Compiling the Project

`make all`

... will compile app, bootloader and generate a partition table based on the config.

## Flashing the Project

When `make all` finishes, it will print a command line to use esptool.py to flash the chip. However you can also do this from make by running:

`make flash`

This will flash the entire project (app, bootloader and partition table) to a new chip. The settings for serial port flashing can be configured with `make menuconfig`.

You don't need to run `make all` before running `make flash`, `make flash` will automatically rebuild anything which needs it.

## Viewing Serial Output

The `make monitor` target uses the [idf_monitor tool](https://docs.espressif.com/projects/esp-idf/en/latest/get-started/idf-monitor.html) to display serial output from the ESP32. idf_monitor also has a range of features to decode crash output and interact with the device. [Check the documentation page for details](https://docs.espressif.com/projects/esp-idf/en/latest/get-started/idf-monitor.html).

Exit the monitor by typing Ctrl-].

To flash and monitor output in one pass, you can run:

`make flash monitor`

## JSON creation
       [{
		"Name":	"Manish kumar",
		"ID":	"1",
		"TIMESTAMP":	"11:46"
       }]

