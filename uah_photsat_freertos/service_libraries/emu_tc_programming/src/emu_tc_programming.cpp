/*
 * emu_tc_programming.cpp
 *
 *  Created on: Jan 13, 2017
 *
 *  Created on: Oct 26, 2024
 *      Author: Oscar Rodriguez Polo
 */

/****************************************************************************
 *
 *   This program is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU General Public License
 *   as published by the Free Software Foundation; either version 2
 *   of the License, or (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307,USA.
 *
 *
 ****************************************************************************/

#include <public/emu_hw_timecode_drv_v1.h>
#include <public/emu_sc_channel_drv_v1.h>
#include <public/emu_gss_v1.h>

//TODO Complete FT_UAH_PHOTSAT_SERV_129_0010  done
//#define FT_UAH_PHOTSAT_SERV_129_0010

#define FT_UAH_PHOTSAT_SERV_129_FDIR_0020


#ifdef FT_UAH_PHOTSAT_SERV_129_0010
EmuGSS_TCProgram129_2 prog_FT_0010_step0(OBT_AFTER_POWER_ON + 5,
    "FT_UAH_PHOTSAT_SERV_129_FDIR_0010, Set PID Kp,Ki,Kd to force max values",0.06, 0.03, 0.02);

EmuGSS_TCProgram129_1 prog_FT_0010_step1(OBT_AFTER_POWER_ON + 8,
	"FT_UAH_PHOTSAT_SERV_129_FDIR_0020, Values to Theta, and number of samples",700,350,5);

#endif


//TODO Complete FT_UAH_PHOTSAT_SERV_129_FDIR_0020 done
#ifdef FT_UAH_PHOTSAT_SERV_129_FDIR_0020

EmuGSS_TCProgram12_5_Value_UINT8 prog_FT_0020_step0(OBT_AFTER_POWER_ON + 4,
    "FT_UAH_PHOTSAT_SERV_129_FDIR_0020, Define PMONID 0 to ThetaYaw_W_ControlPID",0,14,1,1,0x01,0,0x4003);

EmuGSS_TCProgram12_5_Value_UINT8 prog_FT_0020_step1(OBT_AFTER_POWER_ON + 5,
   "FT_UAH_PHOTSAT_SERV_129_FDIR_0020, Define PMONID 1 to ThetaPitch_W_ControlPID",1,13,1,1,0x01,0,0x4003);

EmuGSS_TCProgram12_1 prog_FT_0020_step2(OBT_AFTER_POWER_ON + 9,
  "FT_UAH_PHOTSAT_SERV_129_FDIR_0020, Enable PMONID 0 to ThetaYaw_W_ControlPID",0);

EmuGSS_TCProgram12_1 prog_FT_0020_step3(OBT_AFTER_POWER_ON + 10,
  "FT_UAH_PHOTSAT_SERV_129_FDIR_0020, Enable PMONID 1 to ThetaPitch_W_ControlPID",1);

EmuGSS_TCProgram19_1_Action_129_3 prog_FT_0020_step4(OBT_AFTER_POWER_ON + 15,
	"FT_UAH_PHOTSAT_SERV_129_FDIR_0020, Set Event Action",0x4003);

EmuGSS_TCProgram19_4 prog_FT_0020_step5( OBT_AFTER_POWER_ON + 16,
	"FT_UAH_PHOTSAT_SERV_129_FDIR_0020, Enable Event Action", 0x4003);

EmuGSS_TCProgram129_2 prog_FT_0020_step6(OBT_AFTER_POWER_ON + 18,
    "FT_UAH_PHOTSAT_SERV_129_FDIR_0020, Set PID Kp=Ki=Kd=0.5 to force max values",0.5, 0.5, 0.5);

EmuGSS_TCProgram129_1 prog_FT_0010_step7(OBT_AFTER_POWER_ON + 19,
	"FT_UAH_PHOTSAT_SERV_129_FDIR_0020, Values to Theta, and number of samples",600,950,5);

EmuGSS_TCProgram128_1 prog_FT_0020_step_8(OBT_AFTER_POWER_ON + 25,"FT_UAH_PHOTSAT_SERV_129_FDIR_0020, END TEST");



#endif
