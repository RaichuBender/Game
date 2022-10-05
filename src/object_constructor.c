/*******************************************************************************************************************************
 *
 *   @file		object_constructor.c
 *   @brief		
 *
 *   @date		2022/10/03
 *   @author	Thomas Gijsbers (thomasgijsbers@outlook.com)
 *
 *   @copyright		  ©	2022 ― Thomas Gijsbers
 *						All rights reserved.
 *
 ******************************************************************************************************************************/
#include "commondefs.h"
#include "object.h"


object_t *CreateObject(void)
{
	object_t *ob = malloc(sizeof(struct OBJECT));
	if (ob != NULL)
		return ob;
	
	exit(1);
}
