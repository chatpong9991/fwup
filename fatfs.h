/*
 * Copyright 2014 LKC Technologies, Inc.
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

#ifndef FATFS_H
#define FATFS_H

#include <stdio.h>

/*
 * API wrappers to make the FatFS library easier to use.
 */

int fatfs_mkfs(FILE *fatfp, int block_count);
int fatfs_mkdir(FILE *fatfp, const char *dir);
int fatfs_mv(FILE *fatfp, const char *from_name, const char *to_name);
int fatfs_pwrite(FILE *fatfp, const char *filename, int offset, const char *buffer, size_t size);
int fatfs_closefs();
const char *fatfs_last_error();

#endif // FATFS_H