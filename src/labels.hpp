#pragma once
#include "includes.hpp"
#include "noclip_accuracy.hpp"
#include "cps_counter.hpp"

namespace labels {
    typedef enum {
	LABEL_TIME24 = 0,
	LABEL_TIME12,
	LABEL_NOCLIP_ACCURACY,
	LABEL_CPS_COUNTER,
	LABEL_DEATH_COUNTER,
	LABEL_CUSTOM_TEXT,
	COUNT_LABELS
    } LabelType;
    
    typedef struct {
	LabelType type;
	std::string text;
    } Label;

    extern std::vector<Label> labels_top_left;
    extern std::vector<Label> labels_top_right;
    extern std::vector<Label> labels_bottom_left;
    extern std::vector<Label> labels_bottom_right;

    extern float label_size;
    extern int label_opacity;

    std::string get_label_string_repr(Label const& label);
    std::string get_labels(int position);
}

