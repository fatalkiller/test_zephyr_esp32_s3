/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "./utils/config.h"
#include <stdio.h>
#include <stdlib.h>
#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>

LOG_MODULE_REGISTER(MAIN, APP_LOG_LEVEL);

int main(void) {
  k_sleep(K_MSEC(100));
  LOG_INF("LOG START\n");

  printf("Hello World! %s\n", CONFIG_BOARD_TARGET);

  while (true) {
    k_sleep(K_MSEC(1000));
    LOG_INF("I'm alive");
  }
}
