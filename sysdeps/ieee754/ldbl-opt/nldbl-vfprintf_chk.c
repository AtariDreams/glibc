#include "nldbl-compat.h"

int
attribute_hidden
__vfprintf_chk (FILE *__restrict s, int flag, const char *__restrict fmt, va_list ap)
{
  return __nldbl___vfprintf_chk (s, flag, fmt, ap);
}
