// SPDX-License-Identifier: Apache2.0
/*
 * Copyright (C) 2024 Amlogic Inc.
 */

#ifndef _INIT_BOOTENV_H
#define _INIT_BOOTENV_H

#ifdef __cplusplus
extern "C" {
#endif

int bootenv_init();
const char *bootenv_get(const char *key);
int bootenv_update(const char *name, const char *value);
void bootenv_print(void);

#ifdef __cplusplus
}
#endif
#endif

