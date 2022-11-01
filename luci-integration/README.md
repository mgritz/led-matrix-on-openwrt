# Required Packages (opkg)

* python3
* python3-pyserial
* coreutils-stty
* luci-compat

# Required Changes (apart from the files)

* https://openwrt.org/docs/guide-user/hardware/terminate.console.on.serial
* https://stackoverflow.com/questions/33340659/how-to-auto-start-an-application-in-openwrt

# Interfacing

The LuCI-Integration for some reason does not integrate into the menu.
Navigate to `<ip>/cgi-bin/luci/admin/system/matrixdisplay` to change text.
