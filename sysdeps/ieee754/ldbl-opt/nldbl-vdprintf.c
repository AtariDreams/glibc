#include "nldbl-compat.h"

int
attribute_hidden
vdprintf (int d, const char *__restrict fmt, va_list arg)
{
  return __nldbl_vdprintf (d, fmt, arg);
}
