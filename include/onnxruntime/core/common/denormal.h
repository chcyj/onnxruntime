// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

namespace onnxruntime {

// Set or unset flush-to-zero and denormal=as-zero if SSE3 instructions are supported.
// Return true if SSE3 instruction is supported, otherwise return false.
bool SetDenormalAsZero(bool on);

#ifdef _OPENMP
// Set flush-to-zero and denormal-as-zero on OpenMP threads when on is true.
void InitializeWithDenormalAsZero(bool on);
#endif

}  // namespace onnxruntime
