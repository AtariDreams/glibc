#include "nldbl-compat.h"

attribute_hidden
int
dprintf (int d, const char *__restrict fmt, ...)
{
  va_list arg;
  int done;

  va_start (arg, fmt);
  done = __nldbl_vdprintf (d, fmt, arg);
  va_end (arg);

  return done;
}
