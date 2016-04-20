/****************************************************************************
 
  Header file for Test Harness Service0 
  based on the Gen 2 Events and Services Framework

 ****************************************************************************/

#ifndef PresetSM_H
#define PresetSM_H

#include "ES_Configure.h"
#include "./Framework/ES_Types.h"

// Public Function Prototypes

bool InitPresetSM ( uint8_t Priority );
bool PostPresetSM( ES_Event ThisEvent );
ES_Event RunPresetSM( ES_Event ThisEvent );


#endif /* ServTemplate_H */

