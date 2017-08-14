/*
 *                         OpenSplice DDS
 *
 *   This software and documentation are Copyright 2006 to TO_YEAR PrismTech
 *   Limited, its affiliated companies and licensors. All rights reserved.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 */
#ifndef S_KERNELMANAGER_H
#define S_KERNELMANAGER_H

#if defined (__cplusplus)
extern "C" {
#endif

#include "s_types.h"

#define s_kernelManager(o) ((s_kernelManager)o)

s_kernelManager
s_kernelManagerNew(
   spliced daemon);
void
s_kernelManagerFree(
    s_kernelManager km);

/* wait for kernel manager to become active */
void
s_kernelManagerWaitForActive(
    s_kernelManager km);


#if defined (__cplusplus)
}
#endif

#endif /* S_KERNELMANAGER_H */