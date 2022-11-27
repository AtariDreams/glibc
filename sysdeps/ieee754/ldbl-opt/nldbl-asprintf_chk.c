#include "nldbl-compat.h"

attribute_hidden
int
__asprintf_chk (char **__restrict string_ptr, int flag, const char *__restrict fmt, ...)
{
  va_list arg;
  int done;

  va_start (arg, fmt);
  done = __nldbl___vasprintf_chk (string_ptr, flag, fmt, arg);
  va_end (arg);

  return done;
}
