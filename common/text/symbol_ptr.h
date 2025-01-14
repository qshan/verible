// Copyright 2017-2023 The Verible Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef VERIBLE_COMMON_TEXT_SYMBOLPTR_H__
#define VERIBLE_COMMON_TEXT_SYMBOLPTR_H__

#include <memory>

namespace verible {
class Symbol;
using SymbolPtr = std::unique_ptr<Symbol>;
}  // namespace verible
#endif  // VERIBLE_COMMON_TEXT_SYMBOLPTR_H__
