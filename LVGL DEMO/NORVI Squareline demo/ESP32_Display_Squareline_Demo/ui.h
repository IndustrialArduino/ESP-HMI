// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

    #include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"
// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
extern lv_obj_t *ui_Screen1;
extern lv_obj_t *ui_Calendar1;
void ui_event_Button1( lv_event_t * e);
extern lv_obj_t *ui_Button1;
extern lv_obj_t *ui_Label1;
extern lv_obj_t *ui_Image1;
extern lv_obj_t *ui_Bar1;
extern lv_obj_t *ui_Spinner1;
extern lv_obj_t *ui_Slider1;
extern lv_obj_t *ui_Label2;
void ui_event_Button2( lv_event_t * e);
extern lv_obj_t *ui_Button2;
void ui_event_Button3( lv_event_t * e);
extern lv_obj_t *ui_Button3;
extern lv_obj_t *ui_Label3;
extern lv_obj_t *ui_Label4;
extern lv_obj_t *ui____initial_actions0;

LV_IMG_DECLARE( ui_img_logo_png);   // assets\logo.png



void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif