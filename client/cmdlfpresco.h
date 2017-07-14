//-----------------------------------------------------------------------------
//
// This code is licensed to you under the terms of the GNU GPL, version 2 or,
// at your option, any later version. See the LICENSE.txt file for the text of
// the license.
//-----------------------------------------------------------------------------
// Low frequency Presco tag commands
//-----------------------------------------------------------------------------
#ifndef CMDLFPRESCO_H__
#define CMDLFPRESCO_H__
#include "proxmark3.h"
#include "ui.h"
#include "util.h"
#include "graph.h"
#include "cmdparser.h"
#include "cmddata.h"
#include "cmdmain.h"
#include "cmdlf.h"
#include "protocols.h"  // for T55xx config register definitions
#include "lfdemod.h"    // parityTest

extern int CmdLFPresco(const char *Cmd);
extern int CmdPrescoClone(const char *Cmd);
extern int CmdPrescoSim(const char *Cmd);
extern int CmdPrescoRead(const char *Cmd);
extern int CmdPrescoDemod(const char *Cmd);

int GetWiegandFromPresco(const char *id, uint32_t *sitecode, uint32_t *usercode, uint32_t *fullcode, bool *Q5);

int usage_lf_presco_clone(void);
int usage_lf_presco_sim(void);
#endif

