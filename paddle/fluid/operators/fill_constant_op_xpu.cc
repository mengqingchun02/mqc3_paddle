/* Copyright (c) 2020 PaddlePaddle Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */
#include "paddle/fluid/operators/fill_constant_op.h"

namespace ops = paddle::operators;
#ifdef PADDLE_WITH_XPU
REGISTER_OP_XPU_KERNEL(
    fill_constant,
    ops::FillConstantKernel<float>,
    ops::FillConstantKernel<double>,
    ops::FillConstantKernel<uint8_t>,
    ops::FillConstantKernel<int16_t>,
    ops::FillConstantKernel<int>,
    ops::FillConstantKernel<int64_t>,
    ops::FillConstantKernel<bool>,
    ops::FillConstantKernel<paddle::platform::float16>,
    ops::FillConstantKernel<paddle::platform::complex<float>>,
    ops::FillConstantKernel<paddle::platform::complex<double>>);
#endif
