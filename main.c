#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include "rawdraw_sf.h"
#include "data.h"
#include "ui.h"

int main() {
    data_init();
    ui_init();

    while(1){
        data_update();
        ui_draw();
    }
    ui_cleanup();
    return EXIT_SUCCESS;
}
