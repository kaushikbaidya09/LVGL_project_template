#include <display_ui.h>

#include "lvgl.h"

#define SCREEN_HOR_RES 1024
#define SCREEN_VER_RES 600

// LV_FONT_DECLARE(arial_20);

lv_obj_t* example_screen;
lv_obj_t* label_object;

char* label_data = "New message will be displayed here!";

void *display_screen(char *screen_id, char *screen_name) {
    /* Set up screen object */
    example_screen = lv_obj_create(NULL);
    lv_obj_remove_style_all(example_screen);
    lv_obj_set_size(example_screen, SCREEN_HOR_RES, SCREEN_VER_RES);
    lv_obj_set_style_bg_opa(example_screen, LV_OPA_COVER, 0);
    lv_obj_set_style_bg_color(example_screen, lv_color_hex(0x000000), 0);
    lv_obj_set_style_border_width(example_screen, 2, 0);
    lv_obj_set_style_border_color(example_screen, lv_color_hex(0xFF0000), 0);
    lv_obj_set_style_border_opa(example_screen, LV_OPA_COVER, 0);

    /* Create screen object */
    label_object = lv_label_create(example_screen);
    lv_obj_remove_style_all(label_object);
    lv_obj_set_width(label_object, SCREEN_HOR_RES-20);
    lv_obj_set_style_align(label_object, LV_ALIGN_CENTER, 0);
    lv_obj_set_style_text_align(label_object, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_long_mode(label_object, LV_LABEL_LONG_WRAP);
    lv_obj_set_style_text_font(label_object, &lv_font_montserrat_20, 0);
    lv_obj_set_style_text_color(label_object, lv_color_hex(0xFFFFFF), 0);
    lv_label_set_text(label_object, " __LABEL__ ");

    return (void *)example_screen;
}
