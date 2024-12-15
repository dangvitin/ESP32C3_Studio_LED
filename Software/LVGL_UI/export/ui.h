// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: UI

#ifndef _UI_UI_H
#define _UI_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

#include "ui_helpers.h"
#include "ui_comp.h"
#include "ui_comp_hook.h"
#include "ui_events.h"

// SCREEN: ui_main
void ui_main_screen_init(void);
void ui_event_main(lv_event_t * e);
extern lv_obj_t * ui_main;
void ui_event_nextBtn1(lv_event_t * e);
extern lv_obj_t * ui_nextBtn1;
extern lv_obj_t * ui_connectionStatusLabel;
extern lv_obj_t * ui_connectionStatus;
extern lv_obj_t * ui_battery1;
extern lv_obj_t * ui_charge1;
// CUSTOM VARIABLES

// SCREEN: ui_solidColor
void ui_solidColor_screen_init(void);
void ui_event_solidColor(lv_event_t * e);
extern lv_obj_t * ui_solidColor;
void ui_event_nextBtn2(lv_event_t * e);
extern lv_obj_t * ui_nextBtn2;
void ui_event_redSlide(lv_event_t * e);
extern lv_obj_t * ui_redSlide;
void ui_event_greenSlide(lv_event_t * e);
extern lv_obj_t * ui_greenSlide;
void ui_event_blueSlide(lv_event_t * e);
extern lv_obj_t * ui_blueSlide;
extern lv_obj_t * ui_redLabel;
extern lv_obj_t * ui_greenLabel;
extern lv_obj_t * ui_blueLabel;
extern lv_obj_t * ui_battery2;
extern lv_obj_t * ui_charge2;
// CUSTOM VARIABLES

// SCREEN: ui_effects
void ui_effects_screen_init(void);
void ui_event_effects(lv_event_t * e);
extern lv_obj_t * ui_effects;
void ui_event_nextBtn3(lv_event_t * e);
extern lv_obj_t * ui_nextBtn3;
void ui_event_effectsRoller(lv_event_t * e);
extern lv_obj_t * ui_effectsRoller;
extern lv_obj_t * ui_battery3;
extern lv_obj_t * ui_charge3;
// CUSTOM VARIABLES

// EVENTS

extern lv_obj_t * ui____initial_actions0;

// IMAGES AND IMAGE SETS
LV_IMG_DECLARE(ui_img_bluetooth_disconnected_png);    // assets/bluetooth_disconnected.png
LV_IMG_DECLARE(ui_img_bluetooth_connected_png);    // assets/bluetooth_connected.png
LV_IMG_DECLARE(ui_img_50_png);    // assets/50.png
LV_IMG_DECLARE(ui_img_charge_png);    // assets/charge.png
LV_IMG_DECLARE(ui_img_8x8_dot_png);    // assets/8x8_dot.png
LV_IMG_DECLARE(ui_img_25_png);    // assets/25.png
LV_IMG_DECLARE(ui_img_75_png);    // assets/75.png
LV_IMG_DECLARE(ui_img_100_png);    // assets/100.png
LV_IMG_DECLARE(ui_img_0_png);    // assets/0.png

// UI INIT
void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
