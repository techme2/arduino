////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//     This software is supplied under the terms of a license agreement or    //
//     nondisclosure agreement with Mitov Software and may not be copied      //
//     or disclosed except in accordance with the terms of that agreement.    //
//         Copyright(c) 2002-2017 Mitov Software. All Rights Reserved.        //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#ifndef _MITOV_BEDAC_EEPROM_h
#define _MITOV_BEDAC_EEPROM_h

#include <Mitov_Generic_I2C_EEPROM.h>

namespace Mitov
{
//---------------------------------------------------------------------------
	typedef ArduinoGenericEEPROM_I2C<0x50> ArduinoBedacEEPROM;
//---------------------------------------------------------------------------
}

#endif
