#ifndef _DATA_H_
#define _DATA_H_

#define MAXJOBDAYS 50
#define MAXJOBS 100

#include <time.h>

typedef struct {
    bool is_punchedin;
    int currentday;
} status;

typedef struct {
    time_t start;
    time_t end;
} day;

typedef struct {
	char *jobname;
    day dailydata[MAXJOBDAYS];
} job;

extern job jobs[MAXJOBS];
extern status current = { false, 0 };

void data_init();
void data_update();
void data_update();

#endif
