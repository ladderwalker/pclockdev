#include <stdlib.h>
#include <stdio.h>

#include "files.h"
#include "data.h"
#include "ui.h"

int main( int argc, char **argv ) {
	files_init(;)
	data_init();
	ui_init();

	while(1)
	{
		data_update();
		ui_show();
		usleep(REFRESH_DELAY);
	}

	ui_cleanup();
	files_cleanup;
	return EXIT_SUCCESS;

}
