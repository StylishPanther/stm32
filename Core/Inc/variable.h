//###########################################################################
//
// FILE		: variable.h
//
// TITLE	: variable.h file.
//
// Author	: Lee Jin Ho
//
// Company	: Maze & Hz
//
//###########################################################################
// $Release Date: 2022.08.26 $
//###########################################################################


#ifdef __MAIN__
	#ifndef __VARIABLE_EXT__
		#define __VARIABLE_EXT__
	#endif
#else
	#ifndef __VARIABLE_EXT__
		#define __VARIABLE_EXT__	extern
	#endif
#endif	

	

		
#define PRINT Txprintf("Flow\n");

__VARIABLE_EXT__ Uint16 g_int32_vcount;
__VARIABLE_EXT__ Uint16 g_int32_hcount;
__VARIABLE_EXT__ int32 g_int32_sen_cnt;

__VARIABLE_EXT__ Uint16 flag;

__VARIABLE_EXT__ int32 test;

__VARIABLE_EXT__ Uint32 g_sen[16];

		
