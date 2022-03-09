/********************************************************************
title: PunchClock
file: ui.c
description:
author: James Krause
todo: implement  files_update

********************************************************************/

//Make it so we don't need to include any other C files in our build.
#define CNFG_IMPLEMENTATION
//#define CNFGOGL

#include "rawdraw_sf.h"
#include <stdio.h>

#include "ui.h"

#define SCREENX 640
#define SCREENY 480
#define HALFY 240


buttondata buttons[3];

void HandleKey( int keycode, int bDown ) { }
void HandleButton( int x, int y, int button, int bDown ) {
	test_input( buttons, int x, int y, int button, int bDown );
 }  
void HandleMotion( int x, int y, int mask ) { }      
void HandleDestroy() { }

void punchio(){}
void newjob(){
	
}
void loadjob(){}

void test_input( buttondata btn[], int x, int y, int button, int buttDown ){
	for ( int i = 0; i < 4; i++ ) {
		if ( buttDown == 1 && x > btn[i].upperleftx &&
			 y > btn[i].upperlefty && x < btn[i].lowerrightx && 
			 y < btn[i].lowerrighty ) {
			
			switch (i) {
				case 0:
					punchio();
					break;
				
				case 1:
					newjob();
					break;
				
				case 2:
					loadjob();
					break;
					
				default:
					break;
				
			}
		}	
	} 
} 
//TODO : Implement these bad ass mother fuckers
void ui_init(){
	CNFGBGColor = 0x000080FF; //Darkblue
	CNFGSetup( "PunchClock", 640, 480 );
}

void ui_show() {
	
	char currentjobname[25];
	
	CNFGHandleInput();
	CNFGClearFrame();
	
	//print jobname at top left
	CNFGColor( 0xFFFFFFFF ); //set color to white
	CNFGPenX = 1; CNFGPenY = 1;
	CNFGDrawText( "Hello, World", 2 );

}

void ui_cleanup(){}


