/*****************************************************/
/* File   : BswM.cpp                                 */
/* Author : Naagraaj HM                              */
/*****************************************************/
#include "BswM.h"

#include "EcuM.h"

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
class_BswM BswM;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, BSWM_CODE) class_BswM::InitFunction(void){
}

FUNC(void, BSWM_CODE) class_BswM::DeInitFunction(void){
}

// EcuM.SelectShutdownTarget(...);
// EcuM.GoDownHaltPoll(...);

FUNC(void, BSWM_CODE) class_BswM::CurrentWakeupSources(void){
}

FUNC(void, BSWM_CODE) PartitionRestarted(void){}
FUNC(void, BSWM_CODE) CurrentIcomConfiguration(void){}
FUNC(void, BSWM_CODE) CurrentState(void){}
FUNC(void, BSWM_CODE) CurrentMode(void){}
FUNC(void, BSWM_CODE) CurrentPNCMode(void){}
FUNC(void, BSWM_CODE) InitiateReset(void){}
FUNC(void, BSWM_CODE) ApplicationUpdated(void){}
FUNC(void, BSWM_CODE) CurrentWakeup(void){}
FUNC(void, BSWM_CODE) PortGroupLinkStateChg(void){}
FUNC(void, BSWM_CODE) GetVersionInfo(void){}
FUNC(void, BSWM_CODE) BroadcastStatus(void){}
FUNC(void, BSWM_CODE) StateChangeNotification(void){}
FUNC(void, BSWM_CODE) CurrentSchedule(void){}
FUNC(void, BSWM_CODE) RequestMode(void){}
FUNC(void, BSWM_CODE) CarWakeUpIndication(void){}
FUNC(void, BSWM_CODE) CurrentBlockMode(void){}
FUNC(void, BSWM_CODE) CurrentJobMode(void){}
FUNC(void, BSWM_CODE) ClientServiceCurrentState(void){}
FUNC(void, BSWM_CODE) ConsumedEventGroupCurrentState(void){}
FUNC(void, BSWM_CODE) EventHandlerCurrentState(void){}
FUNC(void, BSWM_CODE) RequestPartitionReset(void){}
FUNC(void, BSWM_CODE) MainFunction(void){}

/*****************************************************/
/* EOF                                               */
/*****************************************************/
