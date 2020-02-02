
/*******************************************************************************
* This file was generated by UI Builder.
* This file will be auto-generated each and everytime you save your project.
* Do not hand edit this file.
********************************************************************************/
		#include "g_inc_uib.h"
#include "uib_views.h"
#include "uib_views_inc.h"
#include "uib_app_manager.h"


/* event handler declarations */
void connection_datetime_view_dtv_previous_button_onclicked(uib_datetime_view_view_context*, Evas_Object*, void*);
void datetime_view_ftg_time_button_onclicked(uib_datetime_view_view_context*, Evas_Object*, void*);
void datetime_view_ftg_date_button_onclicked(uib_datetime_view_view_context*, Evas_Object*, void*);
void connection_datetime_view_dtv_next_button_onclicked(uib_datetime_view_view_context*, Evas_Object*, void*);

uib_view_context* uib_view_datetime_view_create(Evas_Object* parent, void* create_callback_param) {
	uib_datetime_view_view_context* vc = calloc(1, sizeof(uib_datetime_view_view_context));
	vc->parent = parent;
	vc->view_name = "datetime_view";
	vc->indicator_state = ELM_WIN_INDICATOR_SHOW;
	vc->is_user_view = false;
	uib_app_manager_get_instance()->add_view_context((uib_view_context*)vc);
	if (!vc->datetime_grid) {
		vc->datetime_grid= elm_grid_add(parent);
		vc->root_container = vc->datetime_grid;
	}
	uib_views_get_instance()->set_targeted_view((uib_view_context*)vc);

	//bind event handler
	evas_object_smart_callback_add(vc->dtv_previous_button, "clicked", (Evas_Smart_Cb)connection_datetime_view_dtv_previous_button_onclicked, vc);

	evas_object_smart_callback_add(vc->ftg_time_button, "clicked", (Evas_Smart_Cb)datetime_view_ftg_time_button_onclicked, vc);
	evas_object_smart_callback_add(vc->ftg_date_button, "clicked", (Evas_Smart_Cb)datetime_view_ftg_date_button_onclicked, vc);
	evas_object_smart_callback_add(vc->dtv_next_button, "clicked", (Evas_Smart_Cb)connection_datetime_view_dtv_next_button_onclicked, vc);



	evas_object_data_set(vc->root_container, KEY_VIEW_CONTEXT, vc);
	uib_views_create_callback(vc, evas_object_evas_get(vc->root_container), vc->root_container, create_callback_param);
	evas_object_event_callback_add(vc->root_container, EVAS_CALLBACK_DEL, (Evas_Object_Event_Cb)uib_views_destroy_callback, vc);

	return (uib_view_context*)vc;
}
void uib_datetime_view_config_HD_portrait() {
	uib_app_manager_st* uib_app_manager = uib_app_manager_get_instance();
	uib_datetime_view_view_context* vc = (uib_datetime_view_view_context*)uib_app_manager->find_view_context("datetime_view");
	if(!vc) {
		return;
	}
	if(vc->datetime_grid) {
		elm_grid_clear(vc->datetime_grid, EINA_FALSE);
		evas_object_size_hint_align_set(vc->datetime_grid, -1.0, -1.0);		evas_object_size_hint_weight_set(vc->datetime_grid, 1.0, 1.0);		elm_grid_size_set(vc->datetime_grid, 1000, 1000);
		if (!vc->dtv_previous_button) {
			vc->dtv_previous_button = elm_button_add(vc->datetime_grid);
		}
		if (vc->dtv_previous_button) {
			evas_object_size_hint_align_set(vc->dtv_previous_button, -1.0, -1.0);			evas_object_size_hint_weight_set(vc->dtv_previous_button, 1.0, 1.0);			elm_object_text_set(vc->dtv_previous_button,_UIB_LOCALE("책상상태"));
			elm_object_style_set(vc->dtv_previous_button,"bottom");
			evas_object_show(vc->dtv_previous_button);
		}
		if (!vc->datetime_box) {
			vc->datetime_box = elm_box_add(vc->datetime_grid);
		}
		if(vc->datetime_box) {
			elm_win_alpha_set(vc->datetime_box, EINA_FALSE);
			elm_box_homogeneous_set(vc->datetime_box, EINA_FALSE);
			elm_box_horizontal_set(vc->datetime_box, EINA_FALSE);
			elm_box_padding_set(vc->datetime_box,0,0);
			evas_object_size_hint_align_set(vc->datetime_box, -1.0, -1.0);
			evas_object_size_hint_weight_set(vc->datetime_box, 1.0, 1.0);
			if (!vc->dtb_grid) {
				vc->dtb_grid= elm_grid_add(vc->datetime_box);
			}
			if(vc->dtb_grid) {
				elm_grid_clear(vc->dtb_grid, EINA_FALSE);
				evas_object_size_hint_align_set(vc->dtb_grid, -1.0, -1.0);				evas_object_size_hint_weight_set(vc->dtb_grid, 1.0, 1.0);				elm_grid_size_set(vc->dtb_grid, 1000, 1000);
				if (!vc->ftg_time_button) {
					vc->ftg_time_button = elm_button_add(vc->dtb_grid);
				}
				if (vc->ftg_time_button) {
					evas_object_size_hint_align_set(vc->ftg_time_button, -1.0, -1.0);					evas_object_size_hint_weight_set(vc->ftg_time_button, 1.0, 1.0);					elm_object_text_set(vc->ftg_time_button,_UIB_LOCALE("시간"));
					elm_object_style_set(vc->ftg_time_button,"bottom");
					evas_object_show(vc->ftg_time_button);
				}
				if (!vc->dtg_time_box) {
					vc->dtg_time_box = elm_box_add(vc->dtb_grid);
				}
				if(vc->dtg_time_box) {
					elm_win_alpha_set(vc->dtg_time_box, EINA_FALSE);
					elm_box_homogeneous_set(vc->dtg_time_box, EINA_FALSE);
					elm_box_horizontal_set(vc->dtg_time_box, EINA_FALSE);
					elm_box_padding_set(vc->dtg_time_box,0,0);
					evas_object_size_hint_align_set(vc->dtg_time_box, -1.0, -1.0);
					evas_object_size_hint_weight_set(vc->dtg_time_box, 1.0, 1.0);
					if (!vc->time_label) {
						vc->time_label = elm_label_add(vc->dtg_time_box);
					}
					if(vc->time_label) {
						elm_object_text_set(vc->time_label,_UIB_LOCALE("시간"));
						evas_object_show(vc->time_label);
					}
					elm_box_pack_end(vc->dtg_time_box, vc->time_label);
					evas_object_show(vc->dtg_time_box);
				}
				if (!vc->ftg_date_button) {
					vc->ftg_date_button = elm_button_add(vc->dtb_grid);
				}
				if (vc->ftg_date_button) {
					evas_object_size_hint_align_set(vc->ftg_date_button, -1.0, -1.0);					evas_object_size_hint_weight_set(vc->ftg_date_button, 1.0, 1.0);					elm_object_text_set(vc->ftg_date_button,_UIB_LOCALE("날짜"));
					elm_object_style_set(vc->ftg_date_button,"bottom");
					evas_object_show(vc->ftg_date_button);
				}
				if (!vc->dtg_date_box) {
					vc->dtg_date_box = elm_box_add(vc->dtb_grid);
				}
				if(vc->dtg_date_box) {
					elm_win_alpha_set(vc->dtg_date_box, EINA_FALSE);
					elm_box_homogeneous_set(vc->dtg_date_box, EINA_FALSE);
					elm_box_horizontal_set(vc->dtg_date_box, EINA_FALSE);
					elm_box_padding_set(vc->dtg_date_box,0,0);
					evas_object_size_hint_align_set(vc->dtg_date_box, -1.0, -1.0);
					evas_object_size_hint_weight_set(vc->dtg_date_box, 1.0, 1.0);
					if (!vc->date_label) {
						vc->date_label = elm_label_add(vc->dtg_date_box);
					}
					if(vc->date_label) {
						elm_object_text_set(vc->date_label,_UIB_LOCALE("날짜"));
						evas_object_show(vc->date_label);
					}
					elm_box_pack_end(vc->dtg_date_box, vc->date_label);
					evas_object_hide(vc->dtg_date_box);
				}
				elm_grid_pack(vc->dtb_grid, vc->ftg_time_button, 0, 0, 500, 140);				elm_grid_pack(vc->dtb_grid, vc->dtg_time_box, 0, 140, 1000, 860);				elm_grid_pack(vc->dtb_grid, vc->ftg_date_button, 500, 0, 500, 140);				elm_grid_pack(vc->dtb_grid, vc->dtg_date_box, 0, 140, 1000, 860);				evas_object_show(vc->dtb_grid);
			}
			elm_box_pack_end(vc->datetime_box, vc->dtb_grid);
			evas_object_show(vc->datetime_box);
		}
		if (!vc->dtv_next_button) {
			vc->dtv_next_button = elm_button_add(vc->datetime_grid);
		}
		if (vc->dtv_next_button) {
			evas_object_size_hint_align_set(vc->dtv_next_button, -1.0, -1.0);			evas_object_size_hint_weight_set(vc->dtv_next_button, 1.0, 1.0);			elm_object_text_set(vc->dtv_next_button,_UIB_LOCALE("미세먼지"));
			elm_object_style_set(vc->dtv_next_button,"bottom");
			evas_object_show(vc->dtv_next_button);
		}
		elm_grid_pack(vc->datetime_grid, vc->dtv_previous_button, 100, 100, 800, 80);		elm_grid_pack(vc->datetime_grid, vc->datetime_box, 0, 265, 1000, 435);		elm_grid_pack(vc->datetime_grid, vc->dtv_next_button, 100, 850, 800, 80);		evas_object_show(vc->datetime_grid);
	}
}

