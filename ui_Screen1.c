// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "ui.h"

void ui_Screen1_screen_init(void)
{
ui_Screen1 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x202429), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Image1 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Image1, &ui_img_kitchen_white_1_png);
lv_obj_set_width( ui_Image1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Image1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Image1, -89 );
lv_obj_set_y( ui_Image1, 36 );
lv_obj_set_align( ui_Image1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image1, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_img_set_zoom(ui_Image1,80);

ui_Label1 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label1, 0 );
lv_obj_set_y( ui_Label1, -100 );
lv_obj_set_align( ui_Label1, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label1,"Main DashBoard");
lv_obj_set_style_text_color(ui_Label1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label1, &lv_font_montserrat_24, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label2 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label2, 0 );
lv_obj_set_y( ui_Label2, -65 );
lv_obj_set_align( ui_Label2, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label2,"KITCHEN");
lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0xFEBC2C), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label2, &lv_font_montserrat_14, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label3 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label3, 100 );
lv_obj_set_y( ui_Label3, -65 );
lv_obj_set_align( ui_Label3, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label3,"CLEANING");
lv_obj_set_style_text_color(ui_Label3, lv_color_hex(0x4E5358), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label3, &lv_font_montserrat_14, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label4 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label4, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label4, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label4, -100 );
lv_obj_set_y( ui_Label4, -65 );
lv_obj_set_align( ui_Label4, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label4,"ILDE");
lv_obj_set_style_text_color(ui_Label4, lv_color_hex(0x4E5358), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label4, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label4, &lv_font_montserrat_14, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Panel2 = lv_obj_create(ui_Screen1);
lv_obj_set_width( ui_Panel2, 180);
lv_obj_set_height( ui_Panel2, 2);
lv_obj_set_x( ui_Panel2, 0 );
lv_obj_set_y( ui_Panel2, -81 );
lv_obj_set_align( ui_Panel2, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_Panel2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Panel2, lv_color_hex(0xFD413C), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Panel2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_Panel2, lv_color_hex(0xFD413C), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_Panel2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label5 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label5, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label5, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label5, 50 );
lv_obj_set_y( ui_Label5, -44 );
lv_obj_set_align( ui_Label5, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label5,"USER ACTIONS");
lv_obj_set_style_text_color(ui_Label5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label5, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Panel1 = lv_obj_create(ui_Screen1);
lv_obj_set_width( ui_Panel1, 165);
lv_obj_set_height( ui_Panel1, 138);
lv_obj_set_x( ui_Panel1, 50 );
lv_obj_set_y( ui_Panel1, 34 );
lv_obj_set_align( ui_Panel1, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_Panel1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Panel1, lv_color_hex(0x2A2E32), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Panel1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_Panel1, lv_color_hex(0x2A2E32), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_Panel1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_TextArea1 = lv_textarea_create(ui_Screen1);
lv_obj_set_width( ui_TextArea1, 150);
lv_obj_set_height( ui_TextArea1, 110);
lv_obj_set_x( ui_TextArea1, 50 );
lv_obj_set_y( ui_TextArea1, 30 );
lv_obj_set_align( ui_TextArea1, LV_ALIGN_CENTER );
lv_textarea_set_text(ui_TextArea1,"ACTIVATE KITCHEN THINGS");
lv_textarea_set_placeholder_text(ui_TextArea1,"Placeholder...");
lv_obj_set_style_text_color(ui_TextArea1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_TextArea1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_TextArea1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_TextArea1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_TextArea1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_TextArea1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);



}
