/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <ABI38_0_0React/graphics/Geometry.h>

namespace ABI38_0_0facebook {
namespace ABI38_0_0React {

/*
 * State for <SafeAreaView> component.
 */
class SafeAreaViewState final {
 public:
  using Shared = std::shared_ptr<const SafeAreaViewState>;

  SafeAreaViewState() = default;
  SafeAreaViewState(EdgeInsets padding_) : padding(padding_){};

  const EdgeInsets padding{};

#pragma mark - Getters
};

} // namespace ABI38_0_0React
} // namespace ABI38_0_0facebook
