////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//     This software is supplied under the terms of a license agreement or    //
//     nondisclosure agreement with Mitov Software and may not be copied      //
//     or disclosed except in accordance with the terms of that agreement.    //
//         Copyright(c) 2002-2017 Mitov Software. All Rights Reserved.        //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#ifndef _MITOV_LORA_RFM69_REGISTERS_h
#define _MITOV_LORA_RFM69_REGISTERS_h

// This is the address that indicates a broadcast
//static const uint8_t RH_BROADCAST_ADDRESS = 0xff;

static const uint8_t RH_RF69_MAX_PAYLOAD_LEN = 255;

// Maximum encryptable payload length the RF69 can support
static const uint8_t RH_RF69_MAX_ENCRYPTABLE_PAYLOAD_LEN = 64;

// The length of the headers we add.
// The headers are inside the RF69's payload and are therefore encrypted if encryption is enabled
//static const uint8_t RH_RF69_HEADER_LEN = 4;

// The crystal oscillator frequency of the RF69 module
static constexpr float RH_RF69_FXOSC = 32000000.0;

// The Frequency Synthesizer step = RH_RF69_FXOSC / 2^^19
static constexpr float RH_RF69_FSTEP  = (RH_RF69_FXOSC / 524288);

// Register names
static const uint8_t RH_RF69_REG_00_FIFO                                 = 0x00;
static const uint8_t RH_RF69_REG_01_OPMODE                               = 0x01;
static const uint8_t RH_RF69_REG_02_DATAMODUL                            = 0x02;
static const uint8_t RH_RF69_REG_03_BITRATEMSB                           = 0x03;
static const uint8_t RH_RF69_REG_04_BITRATELSB                           = 0x04;
static const uint8_t RH_RF69_REG_05_FDEVMSB                              = 0x05;
static const uint8_t RH_RF69_REG_06_FDEVLSB                              = 0x06;
static const uint8_t RH_RF69_REG_07_FRFMSB                               = 0x07;
static const uint8_t RH_RF69_REG_08_FRFMID                               = 0x08;
static const uint8_t RH_RF69_REG_09_FRFLSB                               = 0x09;
static const uint8_t RH_RF69_REG_0A_OSC1                                 = 0x0a;
static const uint8_t RH_RF69_REG_0B_AFCCTRL                              = 0x0b;
static const uint8_t RH_RF69_REG_0C_RESERVED                             = 0x0c;
static const uint8_t RH_RF69_REG_0D_LISTEN1                              = 0x0d;
static const uint8_t RH_RF69_REG_0E_LISTEN2                              = 0x0e;
static const uint8_t RH_RF69_REG_0F_LISTEN3                              = 0x0f;
static const uint8_t RH_RF69_REG_10_VERSION                              = 0x10;
static const uint8_t RH_RF69_REG_11_PALEVEL                              = 0x11;
static const uint8_t RH_RF69_REG_12_PARAMP                               = 0x12;
static const uint8_t RH_RF69_REG_13_OCP                                  = 0x13;
static const uint8_t RH_RF69_REG_14_RESERVED                             = 0x14;
static const uint8_t RH_RF69_REG_15_RESERVED                             = 0x15;
static const uint8_t RH_RF69_REG_16_RESERVED                             = 0x16;
static const uint8_t RH_RF69_REG_17_RESERVED                             = 0x17;
static const uint8_t RH_RF69_REG_18_LNA                                  = 0x18;
static const uint8_t RH_RF69_REG_19_RXBW                                 = 0x19;
static const uint8_t RH_RF69_REG_1A_AFCBW                                = 0x1a;
static const uint8_t RH_RF69_REG_1B_OOKPEAK                              = 0x1b;
static const uint8_t RH_RF69_REG_1C_OOKAVG                               = 0x1c;
static const uint8_t RH_RF69_REG_1D_OOKFIX                               = 0x1d;
static const uint8_t RH_RF69_REG_1E_AFCFEI                               = 0x1e;
static const uint8_t RH_RF69_REG_1F_AFCMSB                               = 0x1f;
static const uint8_t RH_RF69_REG_20_AFCLSB                               = 0x20;
static const uint8_t RH_RF69_REG_21_FEIMSB                               = 0x21;
static const uint8_t RH_RF69_REG_22_FEILSB                               = 0x22;
static const uint8_t RH_RF69_REG_23_RSSICONFIG                           = 0x23;
static const uint8_t RH_RF69_REG_24_RSSIVALUE                            = 0x24;
static const uint8_t RH_RF69_REG_25_DIOMAPPING1                          = 0x25;
static const uint8_t RH_RF69_REG_26_DIOMAPPING2                          = 0x26;
static const uint8_t RH_RF69_REG_27_IRQFLAGS1                            = 0x27;
static const uint8_t RH_RF69_REG_28_IRQFLAGS2                            = 0x28;
static const uint8_t RH_RF69_REG_29_RSSITHRESH                           = 0x29;
static const uint8_t RH_RF69_REG_2A_RXTIMEOUT1                           = 0x2a;
static const uint8_t RH_RF69_REG_2B_RXTIMEOUT2                           = 0x2b;
static const uint8_t RH_RF69_REG_2C_PREAMBLEMSB                          = 0x2c;
static const uint8_t RH_RF69_REG_2D_PREAMBLELSB                          = 0x2d;
static const uint8_t RH_RF69_REG_2E_SYNCCONFIG                           = 0x2e;
static const uint8_t RH_RF69_REG_2F_SYNCVALUE1                           = 0x2f;
// another 7 sync word bytes follow, 30 through 36 inclusive
static const uint8_t RH_RF69_REG_37_PACKETCONFIG1                        = 0x37;
static const uint8_t RH_RF69_REG_38_PAYLOADLENGTH                        = 0x38;
static const uint8_t RH_RF69_REG_39_NODEADRS                             = 0x39;
static const uint8_t RH_RF69_REG_3A_BROADCASTADRS                        = 0x3a;
static const uint8_t RH_RF69_REG_3B_AUTOMODES                            = 0x3b;
static const uint8_t RH_RF69_REG_3C_FIFOTHRESH                           = 0x3c;
static const uint8_t RH_RF69_REG_3D_PACKETCONFIG2                        = 0x3d;
static const uint8_t RH_RF69_REG_3E_AESKEY1                              = 0x3e;
// Another 15 AES key bytes follow
static const uint8_t RH_RF69_REG_4E_TEMP1                                = 0x4e;
static const uint8_t RH_RF69_REG_4F_TEMP2                                = 0x4f;
static const uint8_t RH_RF69_REG_58_TESTLNA                              = 0x58;
static const uint8_t RH_RF69_REG_5A_TESTPA1                              = 0x5a;
static const uint8_t RH_RF69_REG_5C_TESTPA2                              = 0x5c;
static const uint8_t RH_RF69_REG_6F_TESTDAGC                             = 0x6f;
static const uint8_t RH_RF69_REG_71_TESTAFC                              = 0x71;

// These register masks etc are named wherever possible
// corresponding to the bit and field names in the RFM69 Manual

// RH_RF69_REG_01_OPMODE
static const uint8_t RH_RF69_OPMODE_SEQUENCEROFF                         = 0x80;
static const uint8_t RH_RF69_OPMODE_LISTENON                             = 0x40;
static const uint8_t RH_RF69_OPMODE_LISTENABORT                          = 0x20;
static const uint8_t RH_RF69_OPMODE_MODE                                 = 0x1c;
static const uint8_t RH_RF69_OPMODE_MODE_SLEEP                           = 0x00;
static const uint8_t RH_RF69_OPMODE_MODE_STDBY                           = 0x04;
static const uint8_t RH_RF69_OPMODE_MODE_FS                              = 0x08;
static const uint8_t RH_RF69_OPMODE_MODE_TX                              = 0x0c;
static const uint8_t RH_RF69_OPMODE_MODE_RX                              = 0x10;

// RH_RF69_REG_02_DATAMODUL
static const uint8_t RH_RF69_DATAMODUL_DATAMODE                          = 0x60;
static const uint8_t RH_RF69_DATAMODUL_DATAMODE_PACKET                   = 0x00;
static const uint8_t RH_RF69_DATAMODUL_DATAMODE_CONT_WITH_SYNC           = 0x40;
static const uint8_t RH_RF69_DATAMODUL_DATAMODE_CONT_WITHOUT_SYNC        = 0x60;
static const uint8_t RH_RF69_DATAMODUL_MODULATIONTYPE                    = 0x18;
static const uint8_t RH_RF69_DATAMODUL_MODULATIONTYPE_FSK                = 0x00;
static const uint8_t RH_RF69_DATAMODUL_MODULATIONTYPE_OOK                = 0x08;
static const uint8_t RH_RF69_DATAMODUL_MODULATIONSHAPING                 = 0x03;
static const uint8_t RH_RF69_DATAMODUL_MODULATIONSHAPING_FSK_NONE        = 0x00;
static const uint8_t RH_RF69_DATAMODUL_MODULATIONSHAPING_FSK_BT1_0       = 0x01;
static const uint8_t RH_RF69_DATAMODUL_MODULATIONSHAPING_FSK_BT0_5       = 0x02;
static const uint8_t RH_RF69_DATAMODUL_MODULATIONSHAPING_FSK_BT0_3       = 0x03;
static const uint8_t RH_RF69_DATAMODUL_MODULATIONSHAPING_OOK_NONE        = 0x00;
static const uint8_t RH_RF69_DATAMODUL_MODULATIONSHAPING_OOK_BR          = 0x01;
static const uint8_t RH_RF69_DATAMODUL_MODULATIONSHAPING_OOK_2BR         = 0x02;

// RH_RF69_REG_11_PALEVEL
static const uint8_t RH_RF69_PALEVEL_PA0ON                               = 0x80;
static const uint8_t RH_RF69_PALEVEL_PA1ON                               = 0x40;
static const uint8_t RH_RF69_PALEVEL_PA2ON                               = 0x20;
static const uint8_t RH_RF69_PALEVEL_OUTPUTPOWER                         = 0x1f;

// RH_RF69_REG_23_RSSICONFIG
static const uint8_t RH_RF69_RSSICONFIG_RSSIDONE                         = 0x02;
static const uint8_t RH_RF69_RSSICONFIG_RSSISTART                        = 0x01;

// RH_RF69_REG_25_DIOMAPPING1
static const uint8_t RH_RF69_DIOMAPPING1_DIO0MAPPING                     = 0xc0;
static const uint8_t RH_RF69_DIOMAPPING1_DIO0MAPPING_00                  = 0x00;
static const uint8_t RH_RF69_DIOMAPPING1_DIO0MAPPING_01                  = 0x40;
static const uint8_t RH_RF69_DIOMAPPING1_DIO0MAPPING_10                  = 0x80;
static const uint8_t RH_RF69_DIOMAPPING1_DIO0MAPPING_11                  = 0xc0;

static const uint8_t RH_RF69_DIOMAPPING1_DIO1MAPPING                     = 0x30;
static const uint8_t RH_RF69_DIOMAPPING1_DIO1MAPPING_00                  = 0x00;
static const uint8_t RH_RF69_DIOMAPPING1_DIO1MAPPING_01                  = 0x10;
static const uint8_t RH_RF69_DIOMAPPING1_DIO1MAPPING_10                  = 0x20;
static const uint8_t RH_RF69_DIOMAPPING1_DIO1MAPPING_11                  = 0x30;

static const uint8_t RH_RF69_DIOMAPPING1_DIO2MAPPING                     = 0x0c;
static const uint8_t RH_RF69_DIOMAPPING1_DIO2MAPPING_00                  = 0x00;
static const uint8_t RH_RF69_DIOMAPPING1_DIO2MAPPING_01                  = 0x04;
static const uint8_t RH_RF69_DIOMAPPING1_DIO2MAPPING_10                  = 0x08;
static const uint8_t RH_RF69_DIOMAPPING1_DIO2MAPPING_11                  = 0x0c;

static const uint8_t RH_RF69_DIOMAPPING1_DIO3MAPPING                     = 0x03;
static const uint8_t RH_RF69_DIOMAPPING1_DIO3MAPPING_00                  = 0x00;
static const uint8_t RH_RF69_DIOMAPPING1_DIO3MAPPING_01                  = 0x01;
static const uint8_t RH_RF69_DIOMAPPING1_DIO3MAPPING_10                  = 0x02;
static const uint8_t RH_RF69_DIOMAPPING1_DIO3MAPPING_11                  = 0x03;

// RH_RF69_REG_26_DIOMAPPING2
static const uint8_t RH_RF69_DIOMAPPING2_DIO4MAPPING                     = 0xc0;
static const uint8_t RH_RF69_DIOMAPPING2_DIO4MAPPING_00                  = 0x00;
static const uint8_t RH_RF69_DIOMAPPING2_DIO4MAPPING_01                  = 0x40;
static const uint8_t RH_RF69_DIOMAPPING2_DIO4MAPPING_10                  = 0x80;
static const uint8_t RH_RF69_DIOMAPPING2_DIO4MAPPING_11                  = 0xc0;

static const uint8_t RH_RF69_DIOMAPPING2_DIO5MAPPING                     = 0x30;
static const uint8_t RH_RF69_DIOMAPPING2_DIO5MAPPING_00                  = 0x00;
static const uint8_t RH_RF69_DIOMAPPING2_DIO5MAPPING_01                  = 0x10;
static const uint8_t RH_RF69_DIOMAPPING2_DIO5MAPPING_10                  = 0x20;
static const uint8_t RH_RF69_DIOMAPPING2_DIO5MAPPING_11                  = 0x30;

static const uint8_t RH_RF69_DIOMAPPING2_CLKOUT                          = 0x07;
static const uint8_t RH_RF69_DIOMAPPING2_CLKOUT_FXOSC_                   = 0x00;
static const uint8_t RH_RF69_DIOMAPPING2_CLKOUT_FXOSC_2                  = 0x01;
static const uint8_t RH_RF69_DIOMAPPING2_CLKOUT_FXOSC_4                  = 0x02;
static const uint8_t RH_RF69_DIOMAPPING2_CLKOUT_FXOSC_8                  = 0x03;
static const uint8_t RH_RF69_DIOMAPPING2_CLKOUT_FXOSC_16                 = 0x04;
static const uint8_t RH_RF69_DIOMAPPING2_CLKOUT_FXOSC_32                 = 0x05;
static const uint8_t RH_RF69_DIOMAPPING2_CLKOUT_FXOSC_RC                 = 0x06;
static const uint8_t RH_RF69_DIOMAPPING2_CLKOUT_FXOSC_OFF                = 0x07;

// RH_RF69_REG_27_IRQFLAGS1
static const uint8_t RH_RF69_IRQFLAGS1_MODEREADY                         = 0x80;
static const uint8_t RH_RF69_IRQFLAGS1_RXREADY                           = 0x40;
static const uint8_t RH_RF69_IRQFLAGS1_TXREADY                           = 0x20;
static const uint8_t RH_RF69_IRQFLAGS1_PLLLOCK                           = 0x10;
static const uint8_t RH_RF69_IRQFLAGS1_RSSI                              = 0x08;
static const uint8_t RH_RF69_IRQFLAGS1_TIMEOUT                           = 0x04;
static const uint8_t RH_RF69_IRQFLAGS1_AUTOMODE                          = 0x02;
static const uint8_t RH_RF69_IRQFLAGS1_SYNADDRESSMATCH                   = 0x01;

// RH_RF69_REG_28_IRQFLAGS2
static const uint8_t RH_RF69_IRQFLAGS2_FIFOFULL                          = 0x80;
static const uint8_t RH_RF69_IRQFLAGS2_FIFONOTEMPTY                      = 0x40;
static const uint8_t RH_RF69_IRQFLAGS2_FIFOLEVEL                         = 0x20;
static const uint8_t RH_RF69_IRQFLAGS2_FIFOOVERRUN                       = 0x10;
static const uint8_t RH_RF69_IRQFLAGS2_PACKETSENT                        = 0x08;
static const uint8_t RH_RF69_IRQFLAGS2_PAYLOADREADY                      = 0x04;
static const uint8_t RH_RF69_IRQFLAGS2_CRCOK                             = 0x02;

// RH_RF69_REG_2E_SYNCCONFIG
static const uint8_t RH_RF69_SYNCCONFIG_SYNCON                           = 0x80;
static const uint8_t RH_RF69_SYNCCONFIG_FIFOFILLCONDITION_MANUAL         = 0x40;
static const uint8_t RH_RF69_SYNCCONFIG_SYNCSIZE                         = 0x38;
static const uint8_t RH_RF69_SYNCCONFIG_SYNCSIZE_1                       = 0x00;
static const uint8_t RH_RF69_SYNCCONFIG_SYNCSIZE_2                       = 0x08;
static const uint8_t RH_RF69_SYNCCONFIG_SYNCSIZE_3                       = 0x10;
static const uint8_t RH_RF69_SYNCCONFIG_SYNCSIZE_4                       = 0x18;
static const uint8_t RH_RF69_SYNCCONFIG_SYNCSIZE_5                       = 0x20;
static const uint8_t RH_RF69_SYNCCONFIG_SYNCSIZE_6                       = 0x28;
static const uint8_t RH_RF69_SYNCCONFIG_SYNCSIZE_7                       = 0x30;
static const uint8_t RH_RF69_SYNCCONFIG_SYNCSIZE_8                       = 0x38;
static const uint8_t RH_RF69_SYNCCONFIG_SYNCSIZE_SYNCTOL                 = 0x07;

// RH_RF69_REG_37_PACKETCONFIG1
static const uint8_t RH_RF69_PACKETCONFIG1_PACKETFORMAT_VARIABLE         = 0x80;
static const uint8_t RH_RF69_PACKETCONFIG1_DCFREE                        = 0x60;
static const uint8_t RH_RF69_PACKETCONFIG1_DCFREE_NONE                   = 0x00;
static const uint8_t RH_RF69_PACKETCONFIG1_DCFREE_MANCHESTER             = 0x20;
static const uint8_t RH_RF69_PACKETCONFIG1_DCFREE_WHITENING              = 0x40;
static const uint8_t RH_RF69_PACKETCONFIG1_DCFREE_RESERVED               = 0x60;
static const uint8_t RH_RF69_PACKETCONFIG1_CRC_ON                        = 0x10;
static const uint8_t RH_RF69_PACKETCONFIG1_CRCAUTOCLEAROFF               = 0x08;
static const uint8_t RH_RF69_PACKETCONFIG1_ADDRESSFILTERING              = 0x06;
static const uint8_t RH_RF69_PACKETCONFIG1_ADDRESSFILTERING_NONE         = 0x00;
static const uint8_t RH_RF69_PACKETCONFIG1_ADDRESSFILTERING_NODE         = 0x02;
static const uint8_t RH_RF69_PACKETCONFIG1_ADDRESSFILTERING_NODE_BC      = 0x04;
static const uint8_t RH_RF69_PACKETCONFIG1_ADDRESSFILTERING_RESERVED     = 0x06;

// RH_RF69_REG_3C_FIFOTHRESH
static const uint8_t RH_RF69_FIFOTHRESH_TXSTARTCONDITION_NOTEMPTY        = 0x80;
static const uint8_t RH_RF69_FIFOTHRESH_FIFOTHRESHOLD                    = 0x7f;

// RH_RF69_REG_3D_PACKETCONFIG2
static const uint8_t RH_RF69_PACKETCONFIG2_INTERPACKETRXDELAY            = 0xf0;
static const uint8_t RH_RF69_PACKETCONFIG2_RESTARTRX                     = 0x04;
static const uint8_t RH_RF69_PACKETCONFIG2_AUTORXRESTARTON               = 0x02;
static const uint8_t RH_RF69_PACKETCONFIG2_AESON                         = 0x01;

// RH_RF69_REG_4E_TEMP1
static const uint8_t RH_RF69_TEMP1_TEMPMEASSTART                         = 0x08;
static const uint8_t RH_RF69_TEMP1_TEMPMEASRUNNING                       = 0x04;

// RH_RF69_REG_5A_TESTPA1
static const uint8_t RH_RF69_TESTPA1_NORMAL                              = 0x55;
static const uint8_t RH_RF69_TESTPA1_BOOST                               = 0x5d;

// RH_RF69_REG_5C_TESTPA2
static const uint8_t RH_RF69_TESTPA2_NORMAL                              = 0x70;
static const uint8_t RH_RF69_TESTPA2_BOOST                               = 0x7c;

// RH_RF69_REG_6F_TESTDAGC
static const uint8_t RH_RF69_TESTDAGC_CONTINUOUSDAGC_NORMAL              = 0x00;
static const uint8_t RH_RF69_TESTDAGC_CONTINUOUSDAGC_IMPROVED_LOWBETAON  = 0x20;
static const uint8_t RH_RF69_TESTDAGC_CONTINUOUSDAGC_IMPROVED_LOWBETAOFF = 0x30;

// It is important to keep the modulation index for FSK between 0.5 and 10
// modulation index = 2 * Fdev / BR
// Note that I have not had much success with FSK with Fd > ~5
// You have to construct these by hand, using the data from the RF69 Datasheet :-(
static const uint8_t CONFIG_FSK = (RH_RF69_DATAMODUL_DATAMODE_PACKET | RH_RF69_DATAMODUL_MODULATIONTYPE_FSK | RH_RF69_DATAMODUL_MODULATIONSHAPING_FSK_NONE);
static const uint8_t CONFIG_GFSK = (RH_RF69_DATAMODUL_DATAMODE_PACKET | RH_RF69_DATAMODUL_MODULATIONTYPE_FSK | RH_RF69_DATAMODUL_MODULATIONSHAPING_FSK_BT1_0);
static const uint8_t CONFIG_OOK = (RH_RF69_DATAMODUL_DATAMODE_PACKET | RH_RF69_DATAMODUL_MODULATIONTYPE_OOK | RH_RF69_DATAMODUL_MODULATIONSHAPING_OOK_NONE);

// Choices for RH_RF69_REG_37_PACKETCONFIG1:
static const uint8_t CONFIG_NOWHITE = (RH_RF69_PACKETCONFIG1_PACKETFORMAT_VARIABLE | RH_RF69_PACKETCONFIG1_DCFREE_NONE | RH_RF69_PACKETCONFIG1_CRC_ON | RH_RF69_PACKETCONFIG1_ADDRESSFILTERING_NONE);
static const uint8_t CONFIG_WHITE = (RH_RF69_PACKETCONFIG1_PACKETFORMAT_VARIABLE | RH_RF69_PACKETCONFIG1_DCFREE_WHITENING | RH_RF69_PACKETCONFIG1_ADDRESSFILTERING_NONE);
static const uint8_t CONFIG_MANCHESTER = (RH_RF69_PACKETCONFIG1_PACKETFORMAT_VARIABLE | RH_RF69_PACKETCONFIG1_DCFREE_MANCHESTER | RH_RF69_PACKETCONFIG1_ADDRESSFILTERING_NONE);


#endif
