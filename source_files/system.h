/*
* Copyright (C) 2013 Nivis LLC.
* Email:   opensource@nivis.com
* Website: http://www.nivis.com
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, version 3 of the License.
* 
* Redistribution and use in source and binary forms must retain this
* copyright notice.

* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
*/

/////////////////////////////////////////////////////////////////////////
// File:         system.h
// Author:       NIVIS LLC, Ion Ticus
// Date:         March, 2008
// Description:  This file holds definitions of the general system settings (HW depended)
// Changes:
// Revisions:
/////////////////////////////////////////////////////////////////////////

#ifndef _NIVIS_SYSTEM_H_
#define _NIVIS_SYSTEM_H_

    #include "global.h"

#if( DEVICE_TYPE == DEV_TYPE_MC13225 )
     
    #include "itc.h"

//    #define MONITOR_ENTER()  unsigned int ulIrqStatus = IntDisableAll()
//    #define MONITOR_EXIT()   IntRestoreAll(ulIrqStatus)

    #define MONITOR_ENTER()     unsigned int ulIrqStatus = IntDisableIRQ()
    #define MONITOR_EXIT()      IntRestoreIRQ(ulIrqStatus)

    #define  CPU_WORD_SIZE 4

    #define __swap_bytes(x) ((((uint16)(x)) >> 8) | (((uint16)(x)) << 8))

    #define LogShort(...) // no logging
    #define Log(...)      // no logging
    #define WCI_Log(...)      // no logging

#else 
    #error "Unsupported device type"

#endif // DEVICE_TYPE

#endif // _NIVIS_SYSTEM_H_ 


