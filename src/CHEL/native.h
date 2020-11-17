#pragma once

#include "pch.h"

namespace JS {
    class Native {
    public:
        static void Init();

        // Native function bindings
        static JsValueRef JSONStringify(JsValueRef object);
        static JsValueRef JSONParse(JsValueRef object);
    private:
        static JsValueRef GetFromJS(const char* identifier);

        // Store native function reference copies
        static thread_local JsValueRef jsonStringify;
        static thread_local JsValueRef jsonParse;
    };
}