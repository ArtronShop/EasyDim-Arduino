module.exports = [
    {
        name : "EasyDim",
        blocks : [
            {
                xml: `
                    <block type="easydim_write">
                        <value name="value">
                            <shadow type="math_number">
                                <field name="NUM">50</field>
                            </shadow>
                        </value>
                    </block>
                `
            },
        ]
    }
];
