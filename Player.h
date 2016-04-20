/****************************************************************************
 
  Header file for Test Harness Service0 
  based on the Gen 2 Events and Services Framework

 ****************************************************************************/

#ifndef Player_H
#define Player_H

#include "ES_Configure.h"
#include "./Framework/ES_Types.h"

// Public Function Prototypes

bool InitPlayer ( uint8_t Priority );
bool PostPlayer( ES_Event ThisEvent );
ES_Event RunPlayer( ES_Event ThisEvent );

#endif /* ServTemplate_H */

