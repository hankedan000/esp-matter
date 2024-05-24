// Copyright 2024 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

namespace esp_matter {
namespace cluster {

namespace delegate_cb {

void LaundryWasherModeDelegateInitCB(void *delegate, uint16_t endpoint_id);
void DishWasherModeDelegateInitCB(void *delegate, uint16_t endpoint_id);
void RefrigeratorAndTCCModeDelegateInitCB(void *delegate, uint16_t endpoint_id);
void RvcRunModeDelegateInitCB(void *delegate, uint16_t endpoint_id);
void RvcCleanModeDelegateInitCB(void *delegate, uint16_t endpoint_id);
void EnergyEvseModeDelegateInitCB(void *delegate, uint16_t endpoint_id);
void EnergyEvseDelegateInitCB(void *delegate, uint16_t endpoint_id);
void MicrowaveOvenModeDelegateInitCB(void *delegate, uint16_t endpoint_id);
void MicrowaveOvenControlDelegateInitCB(void *delegate, uint16_t endpoint_id);
void OperationalStateDelegateInitCB(void *delegate, uint16_t endpoint_id);
void FanControlDelegateInitCB(void *delegate, uint16_t endpoint_id);
void HepaFilterMonitoringDelegateInitCB(void *delegate, uint16_t endpoint_id);
void ActivatedCarbonFilterMonitoringDelegateInitCB(void *delegate, uint16_t endpoint_id);
} // namespace delegate_cb

} // namespace cluster
} // namespace esp_matter
