#include "nldbl-compat.h"

int
attribute_hidden
__vasprintf_chk (char **__restrict result_ptr, int flag, const char *__restrict fmt, va_list ap)
{
  return __nldbl___vasprintf_chk (result_ptr, flag, fmt, ap);
}
