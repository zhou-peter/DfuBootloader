/**
  ******************************************************************************
  * @file    bsp_usb.h
  * @author  Benedek Kupper
  * @version 0.1
  * @date    2018-05-21
  * @brief   DfuBootloader BSP for USB communication
  *
  * Copyright (c) 2018 Benedek Kupper
  *
  * Licensed under the Apache License, Version 2.0 (the "License");
  * you may not use this file except in compliance with the License.
  * You may obtain a copy of the License at
  *
  *     http://www.apache.org/licenses/LICENSE-2.0
  *
  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an "AS IS" BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  */
#ifndef __BSP_USB_H_
#define __BSP_USB_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <xpd_usb.h>

void BSP_USB_Bind(USB_HandleType *dev);

#ifdef __cplusplus
}
#endif

#endif /* __BSP_USB_H_ */
