/*******************************************************************************************************************************
 *
 *   @file		cli_main.c
 *   @brief		Command line main entry point
 *
 *   @date		2022/10/03
 *   @author	Thomas Gijsbers (thomasgijsbers@outlook.com)
 *
 *   @copyright		  ©	2022 ― Thomas Gijsbers
 *						All rights reserved.
 *
 ******************************************************************************************************************************/
#include "commondefs.h"
#include "sprite.h"


int main(int argc, char *argv[], char *env[])
{
	printf("Hello, World!\n");
	sprite_t *sprite = CreateSprite();

	sprite->Make(sprite);
	sprite->Tick(sprite);
	sprite->Kill(sprite);

	return 0;
}
