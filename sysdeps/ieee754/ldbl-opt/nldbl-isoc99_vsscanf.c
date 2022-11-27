#include "nldbl-compat.h"

int
attribute_hidden
__isoc99_vsscanf (const char *__restrict string, const char *__restrict fmt, va_list ap)
{
  return __nldbl___isoc99_vsscanf (string, fmt, ap);
}
