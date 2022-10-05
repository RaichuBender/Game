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

typedef void (*spfunc)(union USPRITE *sp);

/*******************************************************************************************************************************
 *   @brief		Object -> Sprite
 *
 ******************************************************************************************************************************/
typedef union USPRITE sprite_t;

struct SPRITE
{
	/// @brief	To be called right after construction, but before use
	spfunc	Make;
	
	/// @brief	Should be called every program tick (/frame?)
	spfunc	Tick;
	
	/// @brief	To be called after use. Frees every child member buffers
	spfunc	Kill;


	/// @brief	Object is active within the currently running program
	bool	bAlive;


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

union USPRITE
{
	struct OBJECT Super;
	struct SPRITE;
};

void SpriteMake(sprite_t *sp);
void SpriteTick(sprite_t *sp);
void SpriteKill(sprite_t *sp);

sprite_t *CreateSprite(void);


#endif /* SPRITE_H */
