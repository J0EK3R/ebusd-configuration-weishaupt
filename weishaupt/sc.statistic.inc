# type (r;w;u;1-9),class,name,comment,QQ,ZZ,PBSB,ID,field1,part (m;s),type / templates,divider / values,unit,comment,field2,part (m;s),type / templates,divider / values,unit,comment,field3,part (m;s),type / templates,divider / values,unit,comment,field4,part (m;s),type / templates,divider / values,unit,comment,field5,part (m;s),type / templates,divider / values,unit,comment,field6,part (m;s),type / templates,divider / values,unit,comment,field7,part (m;s),type / templates,divider / values,unit,comment,field8,part (m;s),type / templates,divider / values,unit,comment
*r,,,,,,"5000",,,,,,,
r,,Statistic1,Statistik ,,,,"67B2A3",Byte0,s,UCH,,, ,BurnerOperationSinceLastService,s,_16_Hours,,,I45: Brennerbetrieb seit letzter Wartung ,Byte3,s,UCH,,, ,Byte4,s,UCH,,, ,ErrorSCOTCalibration8,s,_16_Counter,,,6 8: Fehler SCOT Kalibration ,ErrorSCOTCalibration6,s,_16_Counter,,,6 6: Fehler SCOT Kalibration ,ErrorSCOTCalibration5,s,_16_Counter,,,6 5: Fehler SCOT Kalibration ,ErrorSCOTCalibration4,s,_16_Counter,,,6 4: Fehler SCOT Kalibration 
r,,Statistic2,Statistik ,,,,"6BB2AF",Byte0,s,UCH,,, ,ErrorSCOTControlInput,s,_16_Counter,,,6 2: Fehler SCOT Stellsignal ,ErrorSCOTIOControl,s,_16_Counter,,,6 1: Fehler SCOT IO-Regelung ,ErrorVoltageSupply,s,_16_Counter,,,5 3: Fehler Spannungsversorgung ,CRCErrorManufacturerParameter,s,_16_Counter,,,5 2: CRC-Fehler Herstellerparameter ,CRCErrorHeatingEngeneerParameter,s,_16_Counter,,,5 1: CRC-Fehler Heizungsfachmannparameter ,FanFaultDuringShutdown,s,_16_Counter,,,4 4: Gebläsefehler im Stillstand 
r,,Statistic3,Statistik ,,,,"7FB2BB",Byte0,s,UCH,,, ,FanFaultDuringOperation,s,_16_Counter,,,4 3: Gebläsefehler im Betrieb ,PWMPumpDefective,s,_16_Counter,,,4 2: PWM-Pumpe defekt ,GasValveCycleV1V2Defective,s,_16_Counter,,,4 1: Gasventilkreis V1/V2 defekt ,GPSFailureDuringSafetyTime,s,_16_Counter,,,3 7: GDW-Abfall in Sicherheitszeit ,NoGasPressureAvailable,s,_16_Counter,,,3 6: Gasdruck nicht vorhanden ,WWTurbineDefective,s,_16_Counter,,,3 5: Warmwasserturbine defekt 
r,,Statistic4,Statistik ,,,,"03B2C7",Byte0,s,UCH,,, ,ExternalSensorDefektive,s,_16_Counter,,,3 4: Außenfühler defekt ,DHWSensorDefective,s,_16_Counter,,,3 3: Warmwasserfühler defekt ,FlueGasSensorDefective,s,_16_Counter,,,3 2: Abgasfühler defekt ,BoilerSensorDefective,s,_16_Counter,,,3 1: Kesselfühler defekt ,H2EmergencyOffFunction,s,_16_Counter,,,2 4: H2-NotAus Funktion ,FlameSimulation,s,_16_Counter,,,2 3: Flammvortäuschung 
r,,Statistic5,Statistik ,,,,"17B2D3",Byte0,s,UCH,,, ,FlameFailureDuringOperation,s,_16_Counter,,,Flammausfall im Betrieb ,NoFlameFormation,s,_16_Counter,,,Keine Flammbildung ,Byte5,s,UCH,,, ,Byte6,s,UCH,,, ,Byte7,s,UCH,,, ,Byte8,s,UCH,,, ,Byte9,s,UCH,,, ,Byte10,s,UCH,,, ,Byte11,s,UCH,,, ,Byte12,s,UCH,,, 
r,,Statistic6,Statistik ,,,,"1BB2DF",Byte0,s,UCH,,, ,STWExcess,s,_8_Counter,,,STW Übertemperatur ,Byte2,s,UCH,,, ,Byte3,s,UCH,,, ,Byte4,s,UCH,,, ,DayOperatingHours,s,_8_Counter,,,I41: Tagesbetriebsstundenzähler in 15 min ,Byte6,s,UCH,,, ,NumberMainsOn,s,_16_Counter,,,Anzahl Netz ein ,Byte9,s,UCH,,, ,Byte10,s,UCH,,, ,Byte11,s,UCH,,, ,Byte12,s,UCH,,,
#r,,Statistic7,Statistik ,,,,"B4A2EB0234",Byte0,s,UCH,,, ,Byte1,s,UCH,,, ,Byte2,s,UCH,,, ,Byte3,s,UCH,,, ,OperatingHoursBoiler,s,_24_Hours,,,Betriebsstunden Kessel ,OperatingHoursBurner,s,_16_Hours,,,I43: Betriebsstunden Brenner ,SwitchHysteresisCounterBurner,s,_24_Counter,,,I42: Schaltspielzähler Brenner ,Byte12,s,UCH,,, 

r,,BurnerOperationSinceLastService,I45: Brennerbetrieb seit letzter Wartung ,,,,"AB12A3",,s,_8_Skip,,, ,,s,_16_Hours,,,
r,,StatisticUkn01,Unbekannt ,,,,"AD12A5",,s,_8_Skip,,, ,,s,_16_Hours,,,
r,,ErrorSCOTCalibration8,6 8: Fehler SCOT Kalibration ,,,,"AF12A7",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,ErrorSCOTCalibration6,6 6: Fehler SCOT Kalibration ,,,,"A112A9",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,ErrorSCOTCalibration5,6 5: Fehler SCOT Kalibration ,,,,"A312AB",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,ErrorSCOTCalibration4,6 4: Fehler SCOT Kalibration ,,,,"A512AD",,s,_8_Skip,,, ,,s,_16_Counter,,,

r,,ErrorSCOTControlInput,6 2: Fehler SCOT Stellsignal ,,,,"A712AF",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,ErrorSCOTIOControl,6 1: Fehler SCOT IO-Regelung ,,,,"B912B1",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,ErrorVoltagSupply,5 3: Fehler Spannungsversorgung ,,,,"BB12B3",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,CRCErrorManufacturerParameter,5 2: CRC-Fehler Herstellerparameter ,,,,"BD12B5",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,CRCErrorHeatingEngeneerParameter,5 1: CRC-Fehler Heizungsfachmannparameter ,,,,"BF12B7",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,FanFaultDuringShutdown,4 4: Gebläsefehler im Stillstand ,,,,"B112B9",,s,_8_Skip,,, ,,s,_16_Counter,,,

r,,FanFaultDuringOperation,4 3: Gebläsefehler im Betrieb ,,,,"B312BB",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,PWMPumpDefective,4 2: PWM-Pumpe defekt ,,,,"B512BD",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,GasValveCycleV1V2Defective,4 1: Gasventilkreis V1/V2 defekt ,,,,"B712BF",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,GPSFailureDuringSafetyTime,3 7: GDW-Abfall in Sicherheitszeit ,,,,"C912C1",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,NoGasPressureAvailable,3 6: Gasdruck nicht vorhanden ,,,,"CB12C3",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,WWTurbineDefective,3 5: Warmwasserturbine defekt ,,,,"CD12C5",,s,_8_Skip,,, ,,s,_16_Counter,,,

r,,ExternalSensorDefektive,3 4: Außenfühler defekt ,,,,"CF12C7",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,DHWSensorDefective,3 3: Warmwasserfühler defekt ,,,,"C112C9",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,FlueGasSensorDefective,3 2: Abgasfühler defekt ,,,,"C312CB",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,BoilerSensorDefective,3 1: Kesselfühler defekt ,,,,"C512CD",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,H2EmergencyOffFunction,2 4: H2-NotAus Funktion ,,,,"C712CF",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,FlameSimulation,2 3: Flammvortäuschung ,,,,"D912D1",,s,_8_Skip,,, ,,s,_16_Counter,,,

r,,FlameFailureDuringOperation,Flammausfall im Betrieb ,,,,"DB12D3",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,NoFlameFormation,Keine Flammbildung ,,,,"DD12D5",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,StatisticUkn02,Unbekannt ,,,,"DF12D7",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,StatisticUkn03,Unbekannt ,,,,"D112D9",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,StatisticUkn04,Unbekannt ,,,,"E912E1",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,StatisticUkn05,Unbekannt ,,,,"EB12E3",,s,_8_Skip,,, ,,s,_16_Counter,,,
