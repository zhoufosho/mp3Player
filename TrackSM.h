/****************************************************************************
 
  Header file for Test Harness Service0 
  based on the Gen 2 Events and Services Framework

 ****************************************************************************/

#ifndef TrackSM
#define TrackSM

#include "ES_Configure.h"
#include "./Framework/ES_Types.h"


// typedefs for the states
// State definitions for use with the query function
typedef enum { InitTState, PlayingState, PausingState} TrackState ;


// Public Function Prototypes

bool InitTrackSM ( uint8_t Priority );
bool PostTrackSM( ES_Event ThisEvent );
ES_Event RunTrackSM( ES_Event ThisEvent );

int GetTrackNum();
void SetTrackNum();

#endif /* ServTemplate_H */

