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

/*******************************************************************************************************************************
 *   @brief		Object
 *
 ******************************************************************************************************************************/
typedef struct OBJECT object_t;

struct OBJECT
{
	/// @brief	To be called right after construction, but before use
	ofunc	Make;

	/// @brief	Should be called every program tick (/frame?)
	ofunc	Tick;

	/// @brief	To be called after use. Frees every child member buffers
	ofunc	Kill;

	/// @brief	Object is active within the currently running program
	bool	bAlive;
};

object_t *CreateObject(void);

#endif /* OBJECT_H */
