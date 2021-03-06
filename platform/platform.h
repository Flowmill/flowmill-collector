//
// Copyright 2021 Splunk Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

/*
 * Platform-supplied API
 */

#ifndef PROTOCOL_PLATFORM_H_
#define PROTOCOL_PLATFORM_H_

#include "platform/bitops.h"
#include "platform/debug.h"
#include "platform/generic.h"

#ifdef __KERNEL__
#include "platform/linux-platform.h"
#else /* __KERNEL__ */
#include "platform/userspace-time.h"
#ifdef RTE_ARCH
#include "../src/arbiter/dpdk-platform.h"
#else /* #ifndef NO_DPDK */
#include "platform/no-dpdk.h"
#endif /* #ifndef NO_DPDK */
#endif /* __KERNEL__ */

/** FUNCTIONS IN PLATFORM.H **/

/**
 * static inline u64 fp_get_time_ns(void)
 *
 * returns the current real time (the time that is used to determine timeslots)
 */

#endif /* PROTOCOL_PLATFORM_H_ */
