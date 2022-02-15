#include <stdio.h>
#include "files.h"
#include "data.h"

job jobs[MAXJOBS];
status current = { false, 0 };

void statusfile_init() {
    statusfile = fopen("status.dat", "r");
    while(fread(&current, sizeof(status), 1, statusfile)) {
        printf("%d/n", current.currentday);
    }
}

void jobfile_init() {
    jobfile = fopen("job.dat", "r");
    if(jobfile == NULL) {
        jobs[0].jobname = "firstjob";
    } else {
        while(fread(&jobs, sizeof(job), 1, jobfile)) {
            printf("%s\n", jobs[currentjob].jobname);
        }
    }
    fclose(jobfile);
}

void txtfile_init(){

}

void files_init() {
    statusfile_init();
    jobfile_init();
    txtfile_init();
}
void files_update();
void files_cleanup();
