m = Map("matrixdisplay", "Matrixdisplay") -- We want to edit the uci config file /etc/config/matrixdisplay

s = m:section(TypedSection, "matrixdisplay", "Matrixdisplay")
s.addremove = false

s:option(Value, "text", "Scrolltext", "Text to be displayed")

return m
