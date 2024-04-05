#pragma once
#include "util/io.h"
#include "runtime/optional.h"

extern "C" {
  uint8_t research_isReuseAcrossConstructorsEnabled(lean_object *);
  void research_dump_allocator_log();
  extern const char *g_ResearchAllocatorLogEnvVarName;
}


