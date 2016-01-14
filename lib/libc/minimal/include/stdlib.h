/* stdlib.h */

/*
 * Copyright (c) 2011-2014 Wind River Systems, Inc.
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

#ifndef __INC_stdlib_h__
#define __INC_stdlib_h__

#include <ctype.h>
#include <bits/null.h>

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(__size_t_defined)
#define __size_t_defined
typedef unsigned int  size_t;
#endif

unsigned long int strtoul(const char *str, char **endptr, int base);
long int strtol(const char *str, char **endptr, int base);
int atoi(const char *s);

#ifdef __cplusplus
}
#endif

#endif  /* __INC_stdlib_h__ */
