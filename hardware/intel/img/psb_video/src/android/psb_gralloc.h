/*
 * Copyright (c) 2011 Intel Corporation. All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sub license, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice (including the
 * next paragraph) shall be included in all copies or substantial portions
 * of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.
 * IN NO EVENT SHALL PRECISION INSIGHT AND/OR ITS SUPPLIERS BE LIABLE FOR
 * ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * Authors:
 *    Fei Jiang  <fei.jiang@intel.com>
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <system/window.h>

#ifdef __cplusplus
extern "C"
{
#endif

int gralloc_lock(buffer_handle_t handle, int usage,
        int left, int top, int width, int height, void** vaddr);

int gralloc_unlock(buffer_handle_t handle);

int gralloc_register(buffer_handle_t handle);

int gralloc_unregister(buffer_handle_t handle);

int gralloc_init(void);

int gralloc_getdisplaystatus(buffer_handle_t handle,  int* status);

int gralloc_getbuffd(buffer_handle_t handle);

#ifdef __cplusplus
}
#endif
