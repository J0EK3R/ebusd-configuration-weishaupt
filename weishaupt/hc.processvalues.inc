# type (r;w;u;1-9),class,name,comment,QQ,ZZ,PBSB,ID,field1,part (m;s),type / templates,divider / values,unit,comment,field2,part (m;s),type / templates,divider / values,unit,comment,field3,part (m;s),type / templates,divider / values,unit,comment,field4,part (m;s),type / templates,divider / values,unit,comment,field5,part (m;s),type / templates,divider / values,unit,comment,field6,part (m;s),type / templates,divider / values,unit,comment,field7,part (m;s),type / templates,divider / values,unit,comment,field8,part (m;s),type / templates,divider / values,unit,comment
#,,Prozesswerte Heizkreisregler,,,,,,,,,,,,
*b,,,,,,"0902",,,,,,,
*r,,,,,,"0902",,,,,,,
*w,,,,,,"0903",,,,,,,
#,,HC1 and HC2,,,,,,,,,,,,
r;b,,HeatDemand,Wärmeanforderung HK ,,,,"020002",,,_16_Temp10,,,
r;b,,SupplyTemperatureWTC,Vorlauftemperatur WTC ,,,,"0D0002",,,_16_Temp10,,,
r;b,,SupplySetValueHC,Vorlaufsollwert (Heizkreis) ,,,,"040002",,,_16_Temp10,,,
#,,HC2,,,,,,,,,,,
r;b,,SupplyTemperatureHC,Vorlauftemperatur (Heizkreis) ,,,,"0F0002",,,_16_Temp10,,,
r;b,,RoomSetValue,Raumsollwert ,,,,"120002",,,_16_Temp10,,,
r;b,,RoomTemperature,Raumtemperatur ,,,,"110002",,,_16_Temp10,,,
r;b,,MixedExternalTemperature,Gemischte Außentemperatur ,,,,"1A0A02",,,_16_Temp10,,,
# not used by Weishaupt WCMDiagnose,,,,,,,,,,,,,
r;b,,ExternalTemperature,Außentemperatur ,,,,"0C0002",,,_16_Temp10,,,
r;b,,ProgramChooseSwitch,Stellung Programmwahlschalter ,,,,"120102",,,_16_ProgramChooseSwitch,,,