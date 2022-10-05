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

sprite_t *CreateSprite(void)
{
	sprite_t *sp;

	sp = malloc(sizeof(sprite_t));
	memset(sp, 0, sizeof(sprite_t));

	sp->Base.Make = SpriteMake;
	sp->Base.Tick = SpriteTick;
	sp->Base.Kill = SpriteKill;

	return sp;
}

void SpriteMake(sprite_t *sp)
{
	printf("%x::%s\n", sp, "SpriteMake");

	sp->Base.bAlive = true;
}

void SpriteTick(sprite_t *sp)
{
	printf("%x::%s\n", sp, "SpriteTick");

	sp->Base.bAlive = false;
}

void SpriteKill(sprite_t *sp)
{
	printf("%x::%s\n", sp, "SpriteKill");

	free(sp);
}

