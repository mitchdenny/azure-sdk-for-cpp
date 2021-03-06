// Copyright (c) Microsoft Corporation. All rights reserved.
// SPDX-License-Identifier: MIT

/**
 * @brief Define the base classes for using single page responses.
 *
 */

#pragma once

#include <azure/core/nullable.hpp>

#include <string>

namespace Azure { namespace Security { namespace KeyVault { namespace _internal {
  struct GetPageResultOptions
  {
    virtual ~GetPageResultOptions() = default;
    Azure::Nullable<std::string> NextPageToken;
    Azure::Nullable<int32_t> MaxPageResults;
  };
}}}} // namespace Azure::Security::KeyVault::_internal
