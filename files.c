/********************************************************************
title: PunchClock
file: files.c
description:
author: James Krause
todo: implement  files_update

********************************************************************/

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
    fclose(statusfile);
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

void statusfile_update() {
    statusfile = fopen("status.dat", "w");
    fwrite(&current, sizeof(status), 1, statusfile);
    fclose(statusfile);
}

void jobfile_update() {
    jobfile = fopen("status.dat", "w");
    fwrite(&jobs, sizeof(jobs), 1, jobfile);
    fclose(jobfile);

void txtfile_update( const char * timestrng ) {
    txtfile = fopen("timesheet.txt", "a");
    fprintf(txtfile, "%s\n", timestrng);
    fclose(txtfile);
}


void files_init() {
    statusfile_init();
    jobfile_init();

}
void files_update( const char * timestrng ){
   statusfile_update();
   jobfile_update();
   txtfile_update( timestrng );
}
