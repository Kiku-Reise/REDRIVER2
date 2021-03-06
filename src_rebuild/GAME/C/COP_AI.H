#ifndef COP_AI_H
#define COP_AI_H

extern COP_DATA gCopData;
extern COP_SIGHT_DATA copSightData;
extern VECTOR roadblockLoc;

extern int CopsCanSeePlayer;
extern short pedestrianFelony;

extern int numRoadblockCars;
extern int roadblockCount;
extern int copsAreInPursuit;
extern int requestRoadblock;
extern int roadblockDelay;
extern int roadblockDelayDiff[3];
extern int  requestCopCar;
extern int cop_respawn_timer;

extern int pathStraight;
extern VECTOR lastKnownPosition;

extern char last_cop_phrase;

extern char first_offence;

extern int player_position_known;
extern int numActiveCops;

extern void InitCopState(CAR_DATA *cp, char *extraData); // 0x0002F680

extern void WibbleDownTheRoad(VECTOR *from, int distance, VECTOR *to); // 0x0002D78C

extern void InitCops(); // 0x0002D99C

extern void ControlCops(); // 0x0002DAD8

extern void CopControl(CAR_DATA *cp); // 0x0002F60C

extern void CopControl1(CAR_DATA *cp); // 0x0002DEFC

extern int FindCost(int x, int z, int dvx, int dvz); // 0x0002F8DC

extern void InitCopData(COP_DATA *pCopData); // 0x0002F7F8

extern void UpdateCopSightData(); // 0x0002F844

extern void ControlCopDetection(); // 0x0002ECD8

extern void PassiveCopTasks(CAR_DATA *cp); // 0x0002F6FC

extern void ControlNumberOfCops(); // 0x0002F3CC

extern int ReplayLog_Fnarr_He_Said_Log(int val);

#endif
