/*
 *  Hello world example of using the authenticated encryption with mbed TLS
 *
 *  Copyright (C) 2016-2017, ARM Limited, All Rights Reserved
 *  SPDX-License-Identifier: Apache-2.0
 *
 *  Licensed under the Apache License, Version 2.0 (the "License"); you may
 *  not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 *  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#include "mbed.h"

#include "authcrypt.h"

#include "mbedtls/platform.h"

int main() {
    int exit_code = MBEDTLS_EXIT_SUCCESS;
    Authcrypt *authcrypt = new Authcrypt();

    if (authcrypt->run() != 0) {
        exit_code = MBEDTLS_EXIT_FAILURE;
        mbedtls_printf("\r\nFAIL\r\n");
    }

    delete authcrypt;

    return exit_code;
}
