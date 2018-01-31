//-----------------------------------------------------------------------------
/*!
   \file       col2_eb10sl.h
   \brief      COL2 target driver layer for EB10 with SLAPI.

   \implementation
   project     project name
   copyright   STW (c) 1999-20xx
   license     use only under terms of contract / confidential

   created     07.09.2012  STW/M. Heiss
   \endimplementation
*/
//-----------------------------------------------------------------------------
#ifndef _COL2_EB10SL_H
#define _COL2_EB10SL_H

#ifdef __cplusplus
extern "C" {
#endif

/* -- Includes ------------------------------------------------------------ */
#include "stwtypes.h"

/* -- Defines ------------------------------------------------------------- */


/* -- Types --------------------------------------------------------------- */
typedef struct
{
   uint16 u16_Slot;       //!< expansion board slot
   uint16 u16_Channel;    //!< can bus channel
   uint16 u16_TxFifo;      //!< 1 + n number of outgoing messages to be buffered
   uint16 u16_RxFifo;      //!< 1 + n number of incomming messages to be buffered
} T_col2_config_eb10_sl;


/* -- Global Variables ---------------------------------------------------- */


/* -- Function Prototypes ------------------------------------------------- */
extern sint16 col2_init_eb10_sl(const T_col2_config_eb10_sl * const opt_Config, const uint16 ou16_SDOTimeoutMS,
                                const uint8 ou8_OwnNodeID, void ** const oppv_BusHandle);


/* -- Implementation ------------------------------------------------------ */


#ifdef __cplusplus
} /* end of extern "C" */
#endif

#endif

