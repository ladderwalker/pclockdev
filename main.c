/********************************************************************
title: PunchClock
file: main.c
description:the main file of the entire program, 
author: James Krause
todo: 

********************************************************************/


#include <stdlib.h>
#include <stdio.h>

#include "files.h"
#include "data.h"
#include "ui.h"

int main( int argc, char **argv ) {
	files_init();
	data_init();
	ui_init();

	while(1)
	{
		data_update();
		ui_show();
		usleep(REFRESH_DELAY);
	}

	ui_cleanup();
	
	return EXIT_SUCCESS;

}
