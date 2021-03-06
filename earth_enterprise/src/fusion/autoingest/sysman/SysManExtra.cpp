// Copyright 2017 Google Inc.
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


#include <AssetThrowPolicy.h>
#include <Asset.h>
#include <AssetVersion.h>


template <>
const bool AssetHandle_<AssetImpl>::check_timestamps(false);

template <>
const bool AssetHandle_<AssetVersionImpl>::check_timestamps(false);

bool AssetThrowPolicy::allow_throw(true);
