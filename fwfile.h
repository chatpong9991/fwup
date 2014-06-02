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

#ifndef FWFILE_H
#define FWFILE_H

#include <confuse.h>
#include <archive.h>

int fwfile_add_meta_conf(cfg_t *cfg, struct archive *a);
int fwfile_add_local_file(struct archive *a, const char *name_in_archive, const char *local_path);

#endif // FWFILE_H