#include "feauture.h"

using namespace System;

bool check_type_conversation(String ^ text) {
    String^ input = text;
    int number;

    if (Int32::TryParse(input, number)) {
        return true;
    }
    else {
        return false;
    }

}