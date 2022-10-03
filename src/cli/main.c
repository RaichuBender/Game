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
#include "object.h"


int main(int argc, char *argv[], char *env[])
{
	printf("Hello, World!\n");
	object_t *ptr_new_object = NEW_OBJECT();

	return 0;
}
