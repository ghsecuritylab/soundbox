/*
 * Generated by MTK Easy PinMux Tool Version 2.3.1 for 7686D. Copyright MediaTek Inc. (C) 2015.
 * 2018-07-06 14:45:18:0466
 * Do Not Modify the File.
 */

/*****************************************************************************
*
* Filename:
* ---------
*    ***.*
*
* Project:
* --------
*
* Description:
* ------------
*
* Author:
* -------
*
*============================================================================
****************************************************************************/

#ifndef _EPT_GPIO_DRV_H
#define _EPT_GPIO_DRV_H

#define MODE_0  0
#define MODE_1  1
#define MODE_2  2
#define MODE_3  3
#define MODE_4  4
#define MODE_5  5
#define MODE_6  6
#define MODE_7  7
#define MODE_8  8
#define MODE_9  9
#define MODE_10  10
#define MODE_NC  0

#define PULL_ENABLE    1
#define PULL_DISABLE  0
#define DIR_INPUT       0
#define DIR_OUTPUT    1
#define GPIO_PORTNULL_MODE    0
#define GPIO_PORTNULL_DIR       0
#define GPIO_PORTNULL_OUTPUT_LEVEL  0
#define GPIO_PORTNULL_PU        0
#define GPIO_PORTNULL_PD        0
#define GPIO_PORTNULL_R0        0
#define GPIO_PORTNULL_R1        0
#define GPIO_PORTNULL_PUPD    0
#define GPIO_PORTNULL_DOUT   0

#define GPIO_PORT0_MODE   MODE_4 // 4:SCL1 : Used for SCL1
#define GPIO_PORT1_MODE   MODE_5 // 5:I2S_TX : Used for I2S_TX
#define GPIO_PORT2_MODE   MODE_5 // 5:I2S_WS : Used for I2S_WS
#define GPIO_PORT3_MODE   MODE_5 // 5:I2S_CK : Used for I2S_CK
#define GPIO_PORT4_MODE   MODE_5 // 5:I2S_MCLK : Used for I2S_MCLK
#define GPIO_PORT5_MODE   MODE_6 // 6:TDM_RX : Used for TDM_RX
#define GPIO_PORT6_MODE   MODE_6 // 6:TDM_TX : Used for TDM_TX
#define GPIO_PORT7_MODE   MODE_6 // 6:TDM_WS : Used for TDM_WS
#define GPIO_PORT8_MODE   MODE_6 // 6:TDM_CK : Used for TDM_CK
#define GPIO_PORT9_MODE   MODE_6 // 6:TDM_MCLK : Used for TDM_MCLK
#define GPIO_PORT10_MODE   MODE_NC
#define GPIO_PORT11_MODE   MODE_4 // 4:MA_MC0_CK : Used for MA_MC0_CK
#define GPIO_PORT12_MODE   MODE_4 // 4:MA_MC0_CM0 : Used for MA_MC0_CM0
#define GPIO_PORT13_MODE   MODE_4 // 4:MA_MC0_DA0 : Used for MA_MC0_DA0
#define GPIO_PORT14_MODE   MODE_NC
#define GPIO_PORT15_MODE   MODE_NC
#define GPIO_PORT16_MODE   MODE_NC
#define GPIO_PORT17_MODE   MODE_NC
#define GPIO_PORT18_MODE   MODE_5 // 5:SDA1 : Used for SDA1
#define GPIO_PORT19_MODE   MODE_1 // 1:URXD0 : Used for URXD0
#define GPIO_PORT20_MODE   MODE_1 // 1:UTXD0 : Used for UTXD0
#define GPIO_PORT21_MODE   MODE_0 // 0:GPIO21 : No Pin
#define GPIO_PORT22_MODE   MODE_0 // 0:GPIO22 : No Pin


#define GPIO_PORT0_DIR   DIR_INPUT
#define GPIO_PORT1_DIR   DIR_INPUT
#define GPIO_PORT2_DIR   DIR_INPUT
#define GPIO_PORT3_DIR   DIR_INPUT
#define GPIO_PORT4_DIR   DIR_INPUT
#define GPIO_PORT5_DIR   DIR_INPUT
#define GPIO_PORT6_DIR   DIR_INPUT
#define GPIO_PORT7_DIR   DIR_INPUT
#define GPIO_PORT8_DIR   DIR_INPUT
#define GPIO_PORT9_DIR   DIR_INPUT
#define GPIO_PORT10_DIR   DIR_INPUT
#define GPIO_PORT11_DIR   DIR_INPUT
#define GPIO_PORT12_DIR   DIR_INPUT
#define GPIO_PORT13_DIR   DIR_INPUT
#define GPIO_PORT14_DIR   DIR_INPUT
#define GPIO_PORT15_DIR   DIR_INPUT
#define GPIO_PORT16_DIR   DIR_INPUT
#define GPIO_PORT17_DIR   DIR_INPUT
#define GPIO_PORT18_DIR   DIR_INPUT
#define GPIO_PORT19_DIR   DIR_INPUT
#define GPIO_PORT20_DIR   DIR_INPUT
#define GPIO_PORT21_DIR   DIR_INPUT
#define GPIO_PORT22_DIR   DIR_INPUT


#define GPIO_PORT0_OUTPUT_LEVEL   0
#define GPIO_PORT1_OUTPUT_LEVEL   0
#define GPIO_PORT2_OUTPUT_LEVEL   0
#define GPIO_PORT3_OUTPUT_LEVEL   0
#define GPIO_PORT4_OUTPUT_LEVEL   0
#define GPIO_PORT5_OUTPUT_LEVEL   0
#define GPIO_PORT6_OUTPUT_LEVEL   0
#define GPIO_PORT7_OUTPUT_LEVEL   0
#define GPIO_PORT8_OUTPUT_LEVEL   0
#define GPIO_PORT9_OUTPUT_LEVEL   0
#define GPIO_PORT10_OUTPUT_LEVEL   0
#define GPIO_PORT11_OUTPUT_LEVEL   0
#define GPIO_PORT12_OUTPUT_LEVEL   0
#define GPIO_PORT13_OUTPUT_LEVEL   0
#define GPIO_PORT14_OUTPUT_LEVEL   0
#define GPIO_PORT15_OUTPUT_LEVEL   0
#define GPIO_PORT16_OUTPUT_LEVEL   0
#define GPIO_PORT17_OUTPUT_LEVEL   0
#define GPIO_PORT18_OUTPUT_LEVEL   0
#define GPIO_PORT19_OUTPUT_LEVEL   0
#define GPIO_PORT20_OUTPUT_LEVEL   0
#define GPIO_PORT21_OUTPUT_LEVEL   0
#define GPIO_PORT22_OUTPUT_LEVEL   0


#define GPIO_PORT0_PU   1
#define GPIO_PORT1_PU   0
#define GPIO_PORT2_PU   0
#define GPIO_PORT3_PU   0
#define GPIO_PORT4_PU   0
#define GPIO_PORT5_PU   0
#define GPIO_PORT6_PU   0
#define GPIO_PORT7_PU   0
#define GPIO_PORT8_PU   0
#define GPIO_PORT9_PU   0
#define GPIO_PORT10_PU   0
#define GPIO_PORT11_PU   0
#define GPIO_PORT12_PU   0
#define GPIO_PORT13_PU   0
#define GPIO_PORT14_PU   0
#define GPIO_PORT15_PU   0
#define GPIO_PORT16_PU   0
#define GPIO_PORT17_PU   0
#define GPIO_PORT18_PU   1
#define GPIO_PORT19_PU   1
#define GPIO_PORT20_PU   0
#define GPIO_PORT21_PU   0
#define GPIO_PORT22_PU   0


#define GPIO_PORT0_PD   0
#define GPIO_PORT1_PD   0
#define GPIO_PORT2_PD   0
#define GPIO_PORT3_PD   0
#define GPIO_PORT4_PD   0
#define GPIO_PORT5_PD   1
#define GPIO_PORT6_PD   1
#define GPIO_PORT7_PD   1
#define GPIO_PORT8_PD   1
#define GPIO_PORT9_PD   1
#define GPIO_PORT10_PD   1
#define GPIO_PORT11_PD   0
#define GPIO_PORT12_PD   0
#define GPIO_PORT13_PD   0
#define GPIO_PORT14_PD   0
#define GPIO_PORT15_PD   0
#define GPIO_PORT16_PD   0
#define GPIO_PORT17_PD   1
#define GPIO_PORT18_PD   0
#define GPIO_PORT19_PD   0
#define GPIO_PORT20_PD   0
#define GPIO_PORT21_PD   1
#define GPIO_PORT22_PD   1


// PUPD2  PD-47K_ohms
#define GPIO_PORT11_PUPD  1
#define GPIO_PORT11_R1  0
#define GPIO_PORT11_R0  1
// PUPD2  PD-47K_ohms
#define GPIO_PORT12_PUPD  1
#define GPIO_PORT12_R1  0
#define GPIO_PORT12_R0  1
// PUPD2  PD-47K_ohms
#define GPIO_PORT13_PUPD  1
#define GPIO_PORT13_R1  0
#define GPIO_PORT13_R0  1
// PUPD2  PD-47K_ohms
#define GPIO_PORT14_PUPD  1
#define GPIO_PORT14_R1  0
#define GPIO_PORT14_R0  1
// PUPD2  PD-47K_ohms
#define GPIO_PORT15_PUPD  1
#define GPIO_PORT15_R1  0
#define GPIO_PORT15_R0  1
// PUPD2  PD-47K_ohms
#define GPIO_PORT16_PUPD  1
#define GPIO_PORT16_R1  0
#define GPIO_PORT16_R0  1


#define EPT_GPIO_PIN_MASK_0   0x1fffff

#endif /* _EPT_GPIO_DRV_H */
