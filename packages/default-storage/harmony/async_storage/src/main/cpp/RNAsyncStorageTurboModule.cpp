/**
 * MIT License
 *
 * Copyright (C) 2023 Huawei Device Co., Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "RNAsyncStorageTurboModule.h"
#include "RNOH/ArkTSTurboModule.h"

using namespace rnoh;
using namespace facebook;

static jsi::Value __hostFunction_RNAsyncStorageTurboModule_multiGet(jsi::Runtime &rt, react::TurboModule &turboModule, const jsi::Value *args, size_t count) {
    return static_cast<ArkTSTurboModule &>(turboModule).call(rt, "multiGet", args, count);
}

static jsi::Value __hostFunction_RNAsyncStorageTurboModule_multiSet(jsi::Runtime &rt, react::TurboModule &turboModule, const jsi::Value *args, size_t count) {
    return static_cast<ArkTSTurboModule &>(turboModule).call(rt, "multiSet", args, count);
}

static jsi::Value __hostFunction_RNAsyncStorageTurboModule_multiRemove(jsi::Runtime &rt, react::TurboModule &turboModule, const jsi::Value *args, size_t count) {
    return static_cast<ArkTSTurboModule &>(turboModule).call(rt, "multiRemove", args, count);
}

static jsi::Value __hostFunction_RNAsyncStorageTurboModule_multiMerge(jsi::Runtime &rt, react::TurboModule &turboModule, const jsi::Value *args, size_t count) {
    return static_cast<ArkTSTurboModule &>(turboModule).call(rt, "multiMerge", args, count);
}

static jsi::Value __hostFunction_RNAsyncStorageTurboModule_getAllKeys(jsi::Runtime &rt, react::TurboModule &turboModule, const jsi::Value *args, size_t count) {
    return static_cast<ArkTSTurboModule &>(turboModule).call(rt, "getAllKeys", args, count);
}

static jsi::Value __hostFunction_RNAsyncStorageTurboModule_clear(jsi::Runtime &rt, react::TurboModule &turboModule, const jsi::Value *args, size_t count) {
    return static_cast<ArkTSTurboModule &>(turboModule).call(rt, "clear", args, count);
}

RNAsyncStorageTurboModule::RNAsyncStorageTurboModule(const ArkTSTurboModule::Context ctx, const std::string name)
    : ArkTSTurboModule(ctx, name) {
    methodMap_["multiGet"] = MethodMetadata{2, __hostFunction_RNAsyncStorageTurboModule_multiGet};
    methodMap_["multiSet"] = MethodMetadata{2, __hostFunction_RNAsyncStorageTurboModule_multiSet};
    methodMap_["multiRemove"] = MethodMetadata{2, __hostFunction_RNAsyncStorageTurboModule_multiRemove};
    methodMap_["multiMerge"] = MethodMetadata{2, __hostFunction_RNAsyncStorageTurboModule_multiMerge};
    methodMap_["getAllKeys"] = MethodMetadata{2, __hostFunction_RNAsyncStorageTurboModule_getAllKeys};
    methodMap_["clear"] = MethodMetadata{1, __hostFunction_RNAsyncStorageTurboModule_clear};
}