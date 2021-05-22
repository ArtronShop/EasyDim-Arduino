Blockly.Blocks['easydim_write'] = {
	init: function() {
		this.jsonInit({
			"type": "easydim_write",
			"message0": "EasyDim write %1 %%",
			"args0": [
				{
					"type": "input_value",
					"name": "value",
					"check": "Number"
				}
			],
			"inputsInline": true,
			"previousStatement": null,
			"nextStatement": null,
			"colour": 120,
			"tooltip": "Write value 0% - 100% to EasyDim",
			"helpUrl": "https://www.artronshop.co.th/"
		});
	}
};
