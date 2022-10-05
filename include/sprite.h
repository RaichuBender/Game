/*******************************************************************************************************************************
 *
 *   @file		sprite.h
 *   @brief		
 *
 *   @date		2022/10/05
 *   @author	Thomas Gijsbers (thomasgijsbers@outlook.com)
 *
 *   @copyright		  ©	2022 ― Thomas Gijsbers
 *						All rights reserved.
 *
 ******************************************************************************************************************************/
#ifndef SPRITE_H
#define SPRITE_H

#include "object.h"

union SPRITE
{
	struct OBJECT Super;
	struct
	{
		object_t Base;

		struct
		{
			int x;
			int y;
		} position;
		enum
		{
			DIR_UP,
			DIR_DOWN,
			DIR_LEFT,
			DIR_RIGHT
		} direction;
	};
};

typedef union SPRITE sprite_t;

void SpriteMake(sprite_t *sp);
void SpriteTick(sprite_t *sp);
void SpriteKill(sprite_t *sp);

sprite_t *CreateSprite(void);


#endif /* SPRITE_H */
