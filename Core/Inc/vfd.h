//###########################################################################
//
// FILE		: vfd.h
//
// TITLE	: vfd.h file.
//
// Author	: Lee Jin Ho
//
// Company	: Maze & Hz
//
//###########################################################################
// $Release Date: 2022.08.26 $
//###########################################################################


#ifndef __VFD_H
#define __VFD_H

extern void VfdCtlRegInit(Uint16 CrlReg);
extern void VfdInit(void);
extern void VfdDataLoad(char *Buff);
extern void VFDPrintf(char *Form, ... );

#endif

