#include "labeldef.h"
//  This file is a definition file for the ESPAtherma.
//  uncomment each value you want to query for your installation.

LabelDef PROGMEM labelDefs[] = {
//{0x00,0,801,0,-1,"*Refrigerant type"},
//{0x00,1,996,1,-1,"Override CMD:0x00 N_INV=1"},
//{0x00,2,996,0,-1,"Override CMD:0x00 N_STD=0"},
//{0x00,3,996,2,-1,"Override CMD:0x00 N_FAN=2"},
//{0x00,4,996,2,-1,"Override CMD:0x00 N_EV=2"},
//{0x00,5,996,1,-1,"Override CMD:0x00 N_20S=1"},
//{0x00,6,996,1,-1,"Override CMD:0x00 N_CH=1"},
//{0x00,7,996,3,-1,"Override CMD:0x00 N_SV=3"},
//{0x00,0,152,1,-1,"Sensor Data Qty"},
//{0x00,1,152,1,-1,"INV compressor Qty"},
//{0x00,2,152,1,-1,"STD compressor Qty"},
//{0x00,3,152,1,-1,"Fan Data Qty"},
//{0x00,4,152,1,-1,"Expansion Valve Data Qty"},
//{0x00,5,152,1,-1,"4 Way Valve Data Qty"},
//{0x00,6,152,1,-1,"Crank Case Heater Qty"},
//{0x00,7,152,1,-1,"Solenoid valve Qty"},
//{0x00,8,152,1,-1,"Max. connectable indoor units"},
//{0x00,9,152,1,-1,"Connected Indoor Unit Qty"},
//{0x00,10,152,1,-1,"O/U MPU ID (xx)"},
//{0x00,11,152,1,-1,"O/U MPU ID (yy)"},
//{0x00,12,105,1,-1,"O/U capacity (kW)"},
//{0x10,0,217,1,-1,"Operation Mode"},
//{0x10,1,307,1,-1,"Thermostat ON/OFF"},
//{0x10,1,306,1,-1,"Restart standby"},
//{0x10,1,305,1,-1,"Startup Control"},
//{0x10,1,304,1,-1,"Defrost Operation"},
//{0x10,1,303,1,-1,"Oil Return Operation"},
//{0x10,1,302,1,-1,"Pressure equalizing operation"},
//{0x10,1,301,1,-1,"Demand Signal"},
//{0x10,1,300,1,-1,"Low noise control"},
//{0x10,4,203,1,-1,"Error type"},
//{0x10,5,204,1,-1,"Error Code"},
//{0x10,6,114,2,1,"Target Evap. Temp."},
//{0x10,8,114,2,1,"Target Cond. Temp."},
//{0x10,10,307,1,-1,"Discharge Temp. Drop"},
//{0x10,10,310,1,-1,"Discharge Temp. Protection Retry Qty"},
//{0x10,10,303,1,-1,"Comp. INV Current Drop"},
//{0x10,10,311,1,-1,"Comp. INV Current Protection Retry Qty"},
//{0x10,11,307,1,-1,"HP Drop Control"},
//{0x10,11,310,1,-1,"HP Protection Retry Qty"},
//{0x10,11,303,1,-1,"LP Drop Control"},
//{0x10,11,311,1,-1,"LP Protection Retry Qty"},
//{0x10,12,307,1,-1,"Fin Temp. Drop Control"},
//{0x10,12,310,1,-1,"Fin Temp. Protection Retry Qty"},
//{0x10,12,303,1,-1,"Other Drop Control"},
//{0x10,12,311,1,-1,"Not in use"},
//{0x11,0,215,1,-1,"O/U EEPROM (1st digit)"},
//{0x11,1,215,1,-1,"O/U EEPROM (3rd 4th digit)"},
//{0x11,2,215,1,-1,"O/U EEPROM (5th 6th digit)"},
//{0x11,3,215,1,-1,"O/U EEPROM (7th 8th digit)"},
//{0x11,4,215,1,-1,"O/U EEPROM (10th digit)"},
//{0x11,5,214,1,-1,"O/U EEPROM (11th digit)"},
//{0x00,0,995,1,-1,"NextDataGrid"},
//{0x20,0,105,2,1,"Outdoor air temp.(R1T)"},
//{0x20,2,105,2,1,"2 phase thermistor (R4T)"},
//{0x20,4,105,2,1,"Discharge pipe temp."},
//{0x20,6,105,2,1,"Suction pipe temp.(R3T)"},
//{0x20,8,105,2,1,"Entering brine temp.(R5T)"},
//{0x20,10,105,2,1,"Leaving brine temp.(R6T)"},
//{0x20,12,105,2,1,"Heat sink temp.(R10T)"},
//{0x20,14,105,2,2,"Pressure"},
//{0x20,14,405,2,1,"Pressure(T)"},
//{0x20,16,105,2,-1,"Not in use"},
//{0x20,18,105,2,-1,"Not in use"},
//{0x21,0,105,2,-1,"INV primary current (A)"},
//{0x21,2,105,2,-1,"INV secondary current (A)"},
//{0x21,4,101,2,-1,"Voltage (N-phase) (V)"},
//{0x21,6,307,1,-1,"Brine Flow Switch"},
//{0x21,6,306,1,-1,"Not in use"},
//{0x21,6,305,1,-1,"Not in use"},
//{0x21,6,304,1,-1,"Not in use"},
//{0x21,6,303,1,-1,"Not in use"},
//{0x21,6,302,1,-1,"Not in use"},
//{0x21,6,301,1,-1,"Not in use"},
//{0x21,6,300,1,-1,"Not in use"},
//{0x21,7,105,2,1,"Brine inlet temp."},
//{0x21,9,105,2,1,"Brine outlet temp."},
//{0x21,11,105,2,1,"Refrig. temp. evap. In"},
//{0x21,13,105,2,1,"Refrig. temp. evap.Out"},
//{0x21,15,105,1,-1,"Not in use"},
//{0x21,16,105,1,-1,"Not in use"},
//{0x21,17,105,1,-1,"Not in use"},
//{0x21,18,105,1,-1,"Not in use"},
//{0x00,0,995,1,-1,"NextDataGrid"},
//{0x30,0,152,1,-1,"INV frequency (rps)"},
//{0x30,1,152,1,-1,"INV frequency 2 (rps)"},
//{0x30,0,307,1,-1,"STD Compressor 1"},
//{0x30,0,306,1,-1,"STD Compressor 2"},
//{0x30,0,211,1,-1,"Fan 1 (step)"},
//{0x30,1,211,1,-1,"Fan 2 (step)"},
//{0x30,0,151,2,-1,"Expansion valve (pls)"},
//{0x30,2,151,2,-1,"Expansion valve 2 (pls)"},
//{0x30,4,151,2,-1,"Expansion valve 3 (pls)"},
//{0x30,6,151,2,-1,"Expansion valve 4 (pls)"},
//{0x30,8,151,2,-1,"Expansion valve 5 (pls)"},
//{0x30,0,307,1,-1,"4 Way Valve"},
//{0x30,0,306,1,-1,"4 Way Valve 2"},
//{0x30,0,305,1,-1,"4 Way Valve 3"},
//{0x30,0,304,1,-1,"4 Way Valve 4"},
//{0x30,0,303,1,-1,"4 Way Valve 5"},
//{0x30,0,307,1,-1,"Crank case heater"},
//{0x30,0,306,1,-1,"Crank case heater 2"},
//{0x30,0,305,1,-1,"Crank case heater 3"},
//{0x30,0,304,1,-1,"Crank case heater 4"},
//{0x30,0,307,1,-1,"SV (hot Gas)"},
//{0x30,0,306,1,-1,"SV (BPH)"},
//{0x30,0,305,1,-1,"Solenoid Valve 3"},
//{0x30,0,304,1,-1,"Solenoid Valve 4"},
//{0x30,0,303,1,-1,"Solenoid Valve 5"},
//{0x00,0,998,1,-1,"In-Out separator"},
//{0x60,0,304,1,-1,"Data Enable/Disable"},
//{0x60,1,152,1,-1,"Indoor Unit Address"},
//{0x60,2,315,1,-1,"I/U operation mode"},
//{0x60,2,303,1,-1,"Thermostat ON/OFF"},
//{0x60,2,302,1,-1,"Freeze Protection"},
//{0x60,2,301,1,-1,"Silent Mode"},
//{0x60,2,300,1,-1,"Freeze Protection for water piping"},
//{0x60,3,204,1,-1,"Error Code"},
//{0x60,4,314,2,-1,"Indoor Unit Code"},
//{0x60,6,219,1,-1,"I/U capacity code"},
//{0x60,7,105,2,1,"DHW setpoint"},
//{0x60,9,105,2,1,"LW setpoint (main)"},
//{0x60,11,307,1,-1,"Water flow switch"},
//{0x60,11,306,1,-1,"Thermal protector (Q1L) BUH"},
//{0x60,11,305,1,-1,"Thermal protector BSH"},
//{0x60,11,304,1,-1,"Benefit kWh rate power supply"},
//{0x60,11,303,1,-1,"Solar input"},
//{0x60,11,302,1,-1,"Not in use"},
//{0x60,11,301,1,-1,"Not in use"},
//{0x60,11,300,1,-1,"Bivalent Operation"},
//{0x60,12,307,1,-1,"2way valve(On:Heat_Off:Cool)"},
//{0x60,12,306,1,-1,"3way valve(On:DHW_Off:Space)"},
//{0x60,12,305,1,-1,"BSH"},
//{0x60,12,304,1,-1,"BUH Step1"},
//{0x60,12,303,1,-1,"BUH Step2"},
//{0x60,12,302,1,-1,"BPH"},
//{0x60,12,301,1,-1,"Water pump operation"},
//{0x60,12,300,1,-1,"Solar pump operation"},
//{0x60,13,152,1,-1,"Indoor Option Code"},
//{0x60,15,215,1,-1,"I/U Software ID (xx)"},
//{0x60,14,215,1,-1,"I/U Software ID (yy)"},
//{0x60,16,152,1,-1,"I/U EEPROM Ver."},
//{0x61,0,307,1,-1,"Data Enable/Disable"},
//{0x61,1,152,1,-1,"Indoor Unit Address"},
//{0x61,2,105,2,1,"Leaving water temp. before BUH (R1T)"},
//{0x61,4,105,2,1,"Leaving water temp. after BUH (R2T)"},
//{0x61,6,105,2,1,"Refrig. Temp. liquid side (R3T)"},
//{0x61,8,105,2,1,"Inlet water temp.(R4T)"},
//{0x61,10,105,2,1,"DHW tank temp. (R5T)"},
//{0x61,12,105,2,1,"Indoor ambient temp. (R1T)"},
//{0x61,13,105,2,1,"Ext. indoor ambient sensor (R6T)"},
//{0x62,0,307,1,-1,"Data Enable/Disable"},
//{0x62,1,152,1,-1,"Indoor Unit Address"},
//{0x62,2,307,1,-1,"Reheat ON/OFF"},
//{0x62,2,306,1,-1,"Storage eco ON/OFF"},
//{0x62,2,305,1,-1,"Storage comfort ON/OFF"},
//{0x62,2,304,1,-1,"Powerful DHW Operation. ON/OFF"},
//{0x62,2,303,1,-1,"Space heating Operation ON/OFF"},
//{0x62,2,302,1,-1,"System OFF (ON:System off)"},
//{0x62,2,301,1,-1,"Not in use"},
//{0x62,2,300,1,-1,"Emergency (indoor) active/not active"},
//{0x62,3,105,2,1,"LW setpoint (add)"},
//{0x62,5,105,2,1,"RT setpoint"},
//{0x62,7,307,1,-1,"Add. Ext. RT Input Cool."},
//{0x62,7,306,1,-1,"Add. Ext. RT Input Heat."},
//{0x62,7,305,1,-1,"Main RT Cooling"},
//{0x62,7,304,1,-1,"Main RT Heating"},
//{0x62,7,303,1,-1,"Pwr consumption limit 4"},
//{0x62,7,302,1,-1,"Pwr consumption limit 3"},
//{0x62,7,301,1,-1,"Pwr consumption limit 2"},
//{0x62,7,300,1,-1,"Pwr consumption limit 1"},
//{0x62,8,307,1,-1,"None"},
//{0x62,8,306,1,-1,"Not in use"},
//{0x62,8,305,1,-1,"Not in use"},
//{0x62,8,304,1,-1,"Not in use"},
//{0x62,8,303,1,-1,"Not in use"},
//{0x62,8,302,1,-1,"Circulation pump operation"},
//{0x62,8,301,1,-1,"Alarm output"},
//{0x62,8,300,1,-1,"Space H Operation output"},
//{0x62,9,105,2,-1,"Flow sensor (l/min)"},
//{0x62,11,105,1,2,"Water pressure"},
//{0x62,12,152,1,-1,"Water pump signal (0:max-100:stop)"},
//{0x62,13,152,1,-1,"[Future] 3 way Valve Mixing 1"},
//{0x62,14,152,1,-1,"[Future] 3 way Valve Mixing 2"},
//{0x62,15,152,1,-1,"Not in use"},
//{0x62,16,307,1,-1,"Not in use"},
//{0x62,16,306,1,-1,"Not in use"},
//{0x62,16,305,1,-1,"Not in use"},
//{0x62,16,304,1,-1,"Not in use"},
//{0x62,16,303,1,-1,"Not in use"},
//{0x62,16,302,1,-1,"Not in use"},
//{0x62,16,301,1,-1,"Not in use"},
//{0x62,16,300,1,-1,"Not in use"},
//{0x63,0,307,1,-1,"Data Enable/Disable"},
//{0x63,1,152,1,-1,"Indoor Unit Address"},
//{0x63,2,215,1,-1,"I/U EEPROM (3rd digit)"},
//{0x63,3,215,1,-1,"I/U EEPROM (4th 5th digit)"},
//{0x63,4,215,1,-1,"I/U EEPROM (6th 7th digit)"},
//{0x63,5,215,1,-1,"I/U EEPROM (8th 9th digit)"},
//{0x63,6,215,1,-1,"I/U EEPROM (11th digit)"},
//{0x63,7,214,1,-1,"I/U EEPROM (12th digit)(rev.)"},
//{0x64,0,307,1,-1,"Data Enable/Disable"},
//{0x64,1,152,1,-1,"Indoor Unit Address"},
//{0x64,2,316,1,-1,"Hybrid Op. Mode"},
//{0x64,2,303,1,-1,"Boiler Operation Demand"},
//{0x64,2,302,1,-1,"Boiler DHW Demand"},
//{0x64,2,301,1,-1,"Bypass Valve Output"},
//{0x64,3,105,2,-1,"BE_COP"},
//{0x64,5,105,2,1,"Hybrid Heating Target Temp."},
//{0x64,7,105,2,1,"Boiler Heating Target Temp."},
//{0x00,0,996,0,-1,"Override All Clear"},
};
