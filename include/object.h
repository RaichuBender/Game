/*******************************************************************************************************************************
 *
 *   @file		object.h
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

struct OBJECT
{
	union
	{
		int		__INT;
		char	__STRING [64];
	};
};

typedef struct OBJECT object_t;

object_t *NEW_OBJECT(void);

#endif /* OBJECT_H */
