Blockly.JavaScript['easydim_write'] = function(block) {
	
	
	var code = '';
	code += '#EXTINC#include <EasyDim.h>#END\n';
	code += '#EXTINC#include <Wire.h>#END\n';

	var board_name = Vue.prototype.$global.board.board_info.name;
	var platform_name = Vue.prototype.$global.board.board_info.platform;
	if (platform_name === "arduino-esp32") {
		var WIRE_OBJ = 'Wire';
		var SDA_PIN = 21, SCL_PIN = 22; 
		if (board_name == 'kidbright-arduino' || board_name == 'openkb') {
			WIRE_OBJ = 'Wire1';
			SDA_PIN = 4;
			SCL_PIN = 5;
		} else if (board_name == 'ipst-wifi') {

		}
		
	
		code += '\n';
		code += `#SETUP ${WIRE_OBJ}.begin(${SDA_PIN}, ${SCL_PIN});#END\n`;
		code += `#SETUP EasyDim.begin(0x10, &${WIRE_OBJ});\n #END`;
	} else {
		code += `#SETUP EasyDim.begin(0x10);\n #END`;
	}
	
	var value_value = Blockly.JavaScript.valueToCode(block, 'value', Blockly.JavaScript.ORDER_ATOMIC) || "0";
	code += `EasyDim.write(${value_value});\n`;
	return code;
};
