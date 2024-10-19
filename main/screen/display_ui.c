#include <display_ui.h>

#include "lvgl.h"

#define SCREEN_HOR_RES 1024
#define SCREEN_VER_RES 600

void *display_screen(void) {
    lv_obj_t* screen = lv_obj_create(NULL);
    lv_obj_remove_style_all(screen);
    lv_obj_set_size(screen, SCREEN_HOR_RES, SCREEN_VER_RES);
    lv_obj_set_style_bg_opa(screen, LV_OPA_COVER, 0);
    lv_obj_set_style_bg_color(screen, lv_color_hex(0x000000), 0);
    lv_obj_set_style_border_width(screen, 2, 0);
    lv_obj_set_style_border_color(screen, lv_color_hex(0xE6B400), 0);
    lv_obj_set_style_border_opa(screen, LV_OPA_COVER, 0);

    lv_obj_t* label = lv_label_create(screen);
    lv_obj_remove_style_all(label);
    lv_obj_set_width(label, SCREEN_HOR_RES-20);
    lv_obj_set_style_align(label, LV_ALIGN_CENTER, 0);
    lv_obj_set_style_text_align(label, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_long_mode(label, LV_LABEL_LONG_WRAP);
    lv_obj_set_style_text_font(label, &lv_font_montserrat_20, 0);
    lv_obj_set_style_text_color(label, lv_color_hex(0xFFFFFF), 0);
    lv_label_set_text(label, " Hello World ");

    return (void *)screen;
}
