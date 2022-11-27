#include "nldbl-compat.h"

int
attribute_hidden
vprintf (const char *__restrict fmt, va_list ap)
{
  return __nldbl_vfprintf (stdout, fmt, ap);
}
