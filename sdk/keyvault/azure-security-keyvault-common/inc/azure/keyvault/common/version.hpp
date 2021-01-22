// Copyright (c) Microsoft Corporation. All rights reserved.
// SPDX-License-Identifier: MIT

#pragma once

#include <string>

#include "azure/keyvault/common/dll_import_export.hpp"

#define AZURE_SECURITY_KEYVAULT_COMMON_VERSION_MAJOR 4
#define AZURE_SECURITY_KEYVAULT_COMMON_VERSION_MINOR 0
#define AZURE_SECURITY_KEYVAULT_COMMON_VERSION_PATCH 0
#define AZURE_SECURITY_KEYVAULT_COMMON_VERSION_PRERELEASE "beta.1"

namespace Azure { namespace Security { namespace KeyVault { namespace Common {

  class Version {
  public:
    static constexpr int Major = AZURE_SECURITY_KEYVAULT_COMMON_VERSION_MAJOR;
    static constexpr int Minor = AZURE_SECURITY_KEYVAULT_COMMON_VERSION_MINOR;
    static constexpr int Patch = AZURE_SECURITY_KEYVAULT_COMMON_VERSION_PATCH;
    AZ_SECURITY_KEYVAULT_COMMON_DLLEXPORT static std::string const PreRelease;
    static std::string VersionString();

  private:
    // To avoid leaking out the #define values we smuggle out the value
    // which will later be used to initialize the PreRelease std::string
    static constexpr const char* secret = AZURE_SECURITY_KEYVAULT_COMMON_VERSION_PRERELEASE;
  };
}}}} // namespace Azure::Security::KeyVault::Common

#undef AZURE_SECURITY_KEYVAULT_COMMON_VERSION_MAJOR
#undef AZURE_SECURITY_KEYVAULT_COMMON_VERSION_MINOR
#undef AZURE_SECURITY_KEYVAULT_COMMON_VERSION_PATCH
#undef AZURE_SECURITY_KEYVAULT_COMMON_VERSION_PRERELEASE
