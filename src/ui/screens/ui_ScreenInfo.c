// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: Knomi2

#include "../ui.h"

void ui_ScreenInfo_screen_init(void)
{
    ui_ScreenInfo = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenInfo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScreenInfo, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenInfo, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_img_left_sta_ip = lv_img_create(ui_ScreenInfo);
    lv_img_set_src(ui_img_left_sta_ip, &ui_img_roller_rec_left_png);
    lv_obj_set_width(ui_img_left_sta_ip, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_img_left_sta_ip, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_img_left_sta_ip, -91);
    lv_obj_set_y(ui_img_left_sta_ip, -58);
    lv_obj_set_align(ui_img_left_sta_ip, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_img_left_sta_ip, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_img_left_sta_ip, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_img_mid_sta_ip = lv_img_create(ui_ScreenInfo);
    lv_img_set_src(ui_img_mid_sta_ip, &ui_img_roller_rec_mid_png);
    lv_obj_set_width(ui_img_mid_sta_ip, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_img_mid_sta_ip, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_img_mid_sta_ip, 0);
    lv_obj_set_y(ui_img_mid_sta_ip, -58);
    lv_obj_set_align(ui_img_mid_sta_ip, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_img_mid_sta_ip, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_img_mid_sta_ip, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_label_sta_ip_name = lv_label_create(ui_img_mid_sta_ip);
    lv_obj_set_width(ui_label_sta_ip_name, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_sta_ip_name, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_sta_ip_name, -125);
    lv_obj_set_y(ui_label_sta_ip_name, 0);
    lv_obj_set_align(ui_label_sta_ip_name, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_label_sta_ip_name, "STA:");
    lv_obj_set_style_text_color(ui_label_sta_ip_name, lv_color_hex(0xFFD164), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_label_sta_ip_name, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_label_sta_ip_name, &ui_font_InterSemiBold14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_label_sta_ip = lv_label_create(ui_img_mid_sta_ip);
    lv_obj_set_size(ui_label_sta_ip, 110, 20);   /// 1
    lv_label_set_long_mode(ui_label_sta_ip, LV_LABEL_LONG_SCROLL_CIRCULAR);
    lv_obj_set_x(ui_label_sta_ip, 55);
    lv_obj_set_y(ui_label_sta_ip, 0);
    lv_obj_set_align(ui_label_sta_ip, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_label_sta_ip, "");
    lv_obj_set_style_text_font(ui_label_sta_ip, &ui_font_InterSemiBold14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_img_right_sta_ip = lv_img_create(ui_ScreenInfo);
    lv_img_set_src(ui_img_right_sta_ip, &ui_img_roller_rec_right_png);
    lv_obj_set_width(ui_img_right_sta_ip, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_img_right_sta_ip, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_img_right_sta_ip, 91);
    lv_obj_set_y(ui_img_right_sta_ip, -58);
    lv_obj_set_align(ui_img_right_sta_ip, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_img_right_sta_ip, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_img_right_sta_ip, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_img_mid_ap_ip = lv_img_create(ui_ScreenInfo);
    lv_img_set_src(ui_img_mid_ap_ip, &ui_img_roller_rec_mid_png);
    lv_obj_set_width(ui_img_mid_ap_ip, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_img_mid_ap_ip, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_img_mid_ap_ip, 0);
    lv_obj_set_y(ui_img_mid_ap_ip, -19);
    lv_obj_set_align(ui_img_mid_ap_ip, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_img_mid_ap_ip, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_img_mid_ap_ip, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_label_ap_ip_name = lv_label_create(ui_img_mid_ap_ip);
    lv_obj_set_width(ui_label_ap_ip_name, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_ap_ip_name, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_ap_ip_name, -125);
    lv_obj_set_y(ui_label_ap_ip_name, 0);
    lv_obj_set_align(ui_label_ap_ip_name, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_label_ap_ip_name, "AP:");
    lv_obj_set_style_text_color(ui_label_ap_ip_name, lv_color_hex(0xFFD164), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_label_ap_ip_name, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_label_ap_ip_name, &ui_font_InterSemiBold14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_label_ap_ip = lv_label_create(ui_img_mid_ap_ip);
    lv_obj_set_size(ui_label_ap_ip, 110, 20);   /// 1
    lv_label_set_long_mode(ui_label_ap_ip, LV_LABEL_LONG_SCROLL_CIRCULAR);
    lv_obj_set_x(ui_label_ap_ip, 55);
    lv_obj_set_y(ui_label_ap_ip, 0);
    lv_obj_set_align(ui_label_ap_ip, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_label_ap_ip, "");
    lv_obj_set_style_text_font(ui_label_ap_ip, &ui_font_InterSemiBold14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_img_left_ap_ip = lv_img_create(ui_ScreenInfo);
    lv_img_set_src(ui_img_left_ap_ip, &ui_img_roller_rec_left_png);
    lv_obj_set_width(ui_img_left_ap_ip, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_img_left_ap_ip, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_img_left_ap_ip, -91);
    lv_obj_set_y(ui_img_left_ap_ip, -19);
    lv_obj_set_align(ui_img_left_ap_ip, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_img_left_ap_ip, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_img_left_ap_ip, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_img_right_ap_ip = lv_img_create(ui_ScreenInfo);
    lv_img_set_src(ui_img_right_ap_ip, &ui_img_roller_rec_right_png);
    lv_obj_set_width(ui_img_right_ap_ip, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_img_right_ap_ip, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_img_right_ap_ip, 91);
    lv_obj_set_y(ui_img_right_ap_ip, -19);
    lv_obj_set_align(ui_img_right_ap_ip, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_img_right_ap_ip, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_img_right_ap_ip, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_img_left_local = lv_img_create(ui_ScreenInfo);
    lv_img_set_src(ui_img_left_local, &ui_img_roller_rec_left_png);
    lv_obj_set_width(ui_img_left_local, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_img_left_local, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_img_left_local, -91);
    lv_obj_set_y(ui_img_left_local, 20);
    lv_obj_set_align(ui_img_left_local, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_img_left_local, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_img_left_local, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_img_mid_local = lv_img_create(ui_ScreenInfo);
    lv_img_set_src(ui_img_mid_local, &ui_img_roller_rec_mid_png);
    lv_obj_set_width(ui_img_mid_local, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_img_mid_local, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_img_mid_local, 0);
    lv_obj_set_y(ui_img_mid_local, 20);
    lv_obj_set_align(ui_img_mid_local, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_img_mid_local, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_img_mid_local, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_label_local_name = lv_label_create(ui_img_mid_local);
    lv_obj_set_width(ui_label_local_name, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_local_name, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_local_name, -125);
    lv_obj_set_y(ui_label_local_name, 0);
    lv_obj_set_align(ui_label_local_name, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_label_local_name, "Local:");
    lv_obj_set_style_text_color(ui_label_local_name, lv_color_hex(0xFFD164), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_label_local_name, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_label_local_name, &ui_font_InterSemiBold14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_label_local = lv_label_create(ui_img_mid_local);
    lv_obj_set_size(ui_label_local, 110, 20);   /// 1
    lv_label_set_long_mode(ui_label_local, LV_LABEL_LONG_SCROLL_CIRCULAR);
    lv_obj_set_x(ui_label_local, 55);
    lv_obj_set_y(ui_label_local, 0);
    lv_obj_set_align(ui_label_local, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_label_local, "");
    lv_obj_set_style_text_font(ui_label_local, &ui_font_InterSemiBold14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_img_right_local = lv_img_create(ui_ScreenInfo);
    lv_img_set_src(ui_img_right_local, &ui_img_roller_rec_right_png);
    lv_obj_set_width(ui_img_right_local, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_img_right_local, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_img_right_local, 91);
    lv_obj_set_y(ui_img_right_local, 20);
    lv_obj_set_align(ui_img_right_local, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_img_right_local, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_img_right_local, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_img_left_host = lv_img_create(ui_ScreenInfo);
    lv_img_set_src(ui_img_left_host, &ui_img_roller_rec_left_png);
    lv_obj_set_width(ui_img_left_host, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_img_left_host, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_img_left_host, -91);
    lv_obj_set_y(ui_img_left_host, 59);
    lv_obj_set_align(ui_img_left_host, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_img_left_host, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_img_left_host, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_img_mid_host = lv_img_create(ui_ScreenInfo);
    lv_img_set_src(ui_img_mid_host, &ui_img_roller_rec_mid_png);
    lv_obj_set_width(ui_img_mid_host, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_img_mid_host, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_img_mid_host, 0);
    lv_obj_set_y(ui_img_mid_host, 59);
    lv_obj_set_align(ui_img_mid_host, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_img_mid_host, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_img_mid_host, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_label_host_name = lv_label_create(ui_img_mid_host);
    lv_obj_set_width(ui_label_host_name, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_host_name, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_host_name, -125);
    lv_obj_set_y(ui_label_host_name, 0);
    lv_obj_set_align(ui_label_host_name, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_label_host_name, "Host:");
    lv_obj_set_style_text_color(ui_label_host_name, lv_color_hex(0xFFD164), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_label_host_name, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_label_host_name, &ui_font_InterSemiBold16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_label_host = lv_label_create(ui_img_mid_host);
    lv_obj_set_size(ui_label_host, 110, 20);   /// 1
    lv_label_set_long_mode(ui_label_host, LV_LABEL_LONG_SCROLL_CIRCULAR);
    lv_obj_set_x(ui_label_host, 55);
    lv_obj_set_y(ui_label_host, 0);
    lv_obj_set_align(ui_label_host, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_label_host, "");
    lv_obj_set_style_text_font(ui_label_host, &ui_font_InterSemiBold14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_img_right_host = lv_img_create(ui_ScreenInfo);
    lv_img_set_src(ui_img_right_host, &ui_img_roller_rec_right_png);
    lv_obj_set_width(ui_img_right_host, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_img_right_host, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_img_right_host, 91);
    lv_obj_set_y(ui_img_right_host, 59);
    lv_obj_set_align(ui_img_right_host, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_img_right_host, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_img_right_host, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_ScreenInfo, ui_event_ScreenInfo, LV_EVENT_ALL, NULL);

}
