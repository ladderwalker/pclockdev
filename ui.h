#ifndef _UI_H_
#define _UI_H_

 
typedef struct {
	int upperleftx;
	int upperlefty;
	int lowerrightx;
	int lowerrighty;
	const char *buttontext;
	
} buttondata; 


//Functions
void punchio();
void newjob();
void loadjob();
void test_input( buttondata, int, int, int, int );
void ui_init();
void ui_show();
void ui_cleanup();

#endif
