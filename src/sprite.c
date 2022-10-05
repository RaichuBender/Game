/*******************************************************************************************************************************
 *
 *   @file		sprite.c
 *   @brief		
 *
 *   @date		2022/10/05
 *   @author	Thomas Gijsbers (thomasgijsbers@outlook.com)
 *
 *   @copyright		  ©	2022 ― Thomas Gijsbers
 *						All rights reserved.
 *
 ******************************************************************************************************************************/
#include "sprite.h"


/*******************************************************************************************************************************
 *   @brief		Create a Sprite object.
 * 				Exits execution with error code 0x1 upon allocation/construction failure.
 *
 *   @return	sprite_t * ― Pointer to newly created sprite
 * 				(Should never be NULL)
 ******************************************************************************************************************************/
sprite_t *CreateSprite(void)
{
	sprite_t *sp;

	sp = malloc(sizeof(sprite_t));
	if (sp == NULL)
		exit(1);

	memset(sp, 0, sizeof(sprite_t));

	sp->Make = SpriteMake;
	sp->Tick = SpriteTick;
	sp->Kill = SpriteKill;

	return sp;
}

void SpriteMake(sprite_t *sp)
{
	printf("%x::%s\n", sp, "SpriteMake");

	sp->bAlive = true;
}

void SpriteTick(sprite_t *sp)
{
	printf("%x::%s\n", sp, "SpriteTick");

	sp->bAlive = false;
}

void SpriteKill(sprite_t *sp)
{
	printf("%x::%s\n", sp, "SpriteKill");

	free(sp);
}

