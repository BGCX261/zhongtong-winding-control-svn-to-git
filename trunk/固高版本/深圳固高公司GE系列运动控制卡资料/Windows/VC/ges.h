#ifndef _GOOGOL_GES_H_
#define _GOOGOL_GES_H_


#define GTDLL_API extern "C" __declspec(dllimport) short __stdcall

typedef void (__stdcall *TCommandHandle)(char *,short);

GTDLL_API GT_AddList(void);
GTDLL_API GT_AddLookData(char code,char plane_group,double r,double x,double y,double z,double vel,double cx,double cy,unsigned short i,long n,short flag);
GTDLL_API GT_AlarmOff(unsigned short axis);
GTDLL_API GT_AlarmOn(unsigned short axis);
GTDLL_API GT_ArcXY(double x_center,double y_center,double angle);
GTDLL_API GT_ArcXYP(double x_end,double y_end,double r,short direction);
GTDLL_API GT_ArcYZ(double y_center,double z_center,double angle);
GTDLL_API GT_ArcYZP(double y_end,double z_end,double r,short direction);
GTDLL_API GT_ArcZX(double z_center,double x_center,double angle);
GTDLL_API GT_ArcZXP(double z_end,double x_end,double r,short direction);
GTDLL_API GT_AuStpOff(unsigned short axis);
GTDLL_API GT_AuStpOn(unsigned short axis);
GTDLL_API GT_AxisOff(unsigned short axis);
GTDLL_API GT_AxisOn(unsigned short axis);
GTDLL_API GT_BufIO(unsigned short status);
GTDLL_API GT_BufIOBit(unsigned short bit,short status);
GTDLL_API GT_CalVel(double *vel,long *number);
GTDLL_API GT_CalVelEx(double *vel,long *number,double *f);
GTDLL_API GT_CaptHome(unsigned short axis);
GTDLL_API GT_CaptIndex(unsigned short axis);
GTDLL_API GT_CaptProb(void);
GTDLL_API GT_Close(void);
GTDLL_API GT_ClrEncPos(unsigned short axis);
GTDLL_API GT_ClrSts(unsigned short axis);
GTDLL_API GT_Delay(long time);
GTDLL_API GT_DrvRst(unsigned short axis);
GTDLL_API GT_EncOff(unsigned short axis);
GTDLL_API GT_EncOn(unsigned short axis);
GTDLL_API GT_EncPos(unsigned short axis,long *pos);
GTDLL_API GT_EncSns(unsigned short sense);
GTDLL_API GT_EncVel(unsigned short number,double* vel);
GTDLL_API GT_EndList(void);
GTDLL_API GT_EStpMtn(void);
GTDLL_API GT_ExInpt(unsigned short *input);
GTDLL_API GT_ExitHWheel(void);
GTDLL_API GT_ExOpt(unsigned short value);
GTDLL_API GT_ExOptBit(unsigned short bit,unsigned short value);
GTDLL_API GT_GetAdc(unsigned short channel,short* voltage);
GTDLL_API GT_GetAtlPos(unsigned short axis,long *pos);
GTDLL_API GT_GetAtlErr(unsigned short axis,long *error);
GTDLL_API GT_GetAtlVel(unsigned short axis,double *vel);
GTDLL_API GT_GetBrkPnt(double *point);
GTDLL_API GT_GetCapt(unsigned short axis,long *pos);
GTDLL_API GT_GetCmdSts(unsigned short *status);
GTDLL_API GT_GetCrdSts(unsigned short *status);
GTDLL_API GT_GetCurrentCardNo(void);
GTDLL_API GT_GetHomeSwt(unsigned short *home);
GTDLL_API GT_GetLmtSwt(unsigned short *limit);
GTDLL_API GT_GetMtnNm(unsigned short *number);
GTDLL_API GT_GetPosErr(unsigned short axis,unsigned short *error);
GTDLL_API GT_GetPrfPnt(double *point);
GTDLL_API GT_GetPrfVel (double *vel);
GTDLL_API GT_GetSegPnt(double* point);
GTDLL_API GT_GetSts(unsigned short axis, unsigned short *status);
GTDLL_API GT_HandWheel(unsigned short axis,double ratio);
GTDLL_API GT_HardRst(void);
GTDLL_API GT_HomeSns(unsigned short sense);
GTDLL_API GT_HookCommand(TCommandHandle CommandHandle);
GTDLL_API GT_IndexSns(unsigned short sense);
GTDLL_API GT_InitLookAhead(double t,double acc_max,double acc,double vel,short n,double con);
GTDLL_API GT_LmtSns(unsigned short sense);
GTDLL_API GT_LmtsOff(unsigned short axis);
GTDLL_API GT_LmtsOn(unsigned short axis);
GTDLL_API GT_LnXY(double x, double y);
GTDLL_API GT_LnXYG0(double x, double y);
GTDLL_API GT_LnXYZ(double x,double y,double z);
GTDLL_API GT_LnXYZG0(double x,double y,double z);
GTDLL_API GT_MapCnt(unsigned short axis,double count);
GTDLL_API GT_MvXY(double x,double y,double vel,double acc);
GTDLL_API GT_MvXYZ(double x,double y,double z,double vel,double acc);
GTDLL_API GT_Open(unsigned long address=65535);
GTDLL_API GT_Override(double override);
GTDLL_API GT_OverrideG0(double override);
GTDLL_API GT_Reset(void);
GTDLL_API GT_RestoreMtn(void);
GTDLL_API GT_RstSts(unsigned short axis,unsigned short mask);
GTDLL_API GT_SetAdcChn(unsigned short channel);
GTDLL_API GT_SetAtlPos(unsigned short axis, double pos);
GTDLL_API GT_SetBacklash(unsigned short axis,unsigned short backlash);
GTDLL_API GT_SetDccVel(double vel);
GTDLL_API GT_SetMaxVel(double vel);
GTDLL_API GT_SetPosErr(unsigned short axis,unsigned short error);
GTDLL_API GT_SetStpAcc(double acc);
GTDLL_API GT_SetStrtVel(double vel);
GTDLL_API GT_SetSynAcc(double acc);
GTDLL_API GT_SetSynVel(double vel);
GTDLL_API GT_StepDir(unsigned short axis);
GTDLL_API GT_StepPulse(unsigned short axis);
GTDLL_API GT_StpMtn(void);
GTDLL_API GT_StrtList(void);
GTDLL_API GT_StrtMtn(void);
GTDLL_API GT_SwitchtoCardNo(unsigned short number);
GTDLL_API GT_ZeroPos(unsigned short axis);

#endif  //_GOOGOL_GES_H_