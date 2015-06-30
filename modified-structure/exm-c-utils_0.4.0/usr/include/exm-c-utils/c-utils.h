/*
 * Copyright 2013 University of Chicago and Argonne National Laboratory
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
 * limitations under the License
 */

/**
 *  C-UTILS
 *
 *  Created on: Dec 31, 2011
 *      Author: wozniak
 *
 *  Administrative functionality for c-utils project
 *  Note that this file is filtered by config.status
 *  Allows configure-time symbols without requiring
 *    referring to config.h
 * */

#ifndef C_UTILS_H
#define C_UTILS_H

#include <version.h>

// Stringification helpers:
// Cf. http://gcc.gnu.org/onlinedocs/cpp/Stringification.html
#define xstr(s) str(s)
#define str(s) #s

#define SUBST_HAVE_STRNLEN 1
#define C_UTILS_VERSION 0.4.0

void c_utils_version(version* output);

#endif
