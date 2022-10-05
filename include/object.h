/*******************************************************************************************************************************
 *
 *   @file		Object.h
 *   @brief		
 *
 *   @date		2022/10/03
 *   @author	Thomas Gijsbers (thomasgijsbers@outlook.com)
 *
 *   @copyright		  ©	2022 ― Thomas Gijsbers
 *						All rights reserved.
 *
 ******************************************************************************************************************************/
#ifndef OBJECT_H
#define OBJECT_H

#include "commondefs.h"

typedef void (*ofunc)(struct OBJECT *ob);

struct OBJECT
{
	ofunc	Make;
	ofunc	Tick;
	ofunc	Kill;

	bool	bAlive;
};

typedef struct OBJECT object_t;

object_t *CreateObject(void);

#endif /* OBJECT_H */
