module("luci.controller.ilab.matrixdisplay", package.seeall)

function index()
    entry({"admin", "system", "matrixdisplay"}, cbi("ilab-matrixdisplay/textoutput"), "Matrix Display", 8).dependent=false
end

