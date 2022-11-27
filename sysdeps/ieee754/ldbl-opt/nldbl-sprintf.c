#include "nldbl-compat.h"

int
attribute_hidden
sprintf (char *__restrict s, const char *__restrict fmt, ...)
{
  va_list arg;
  int done;

  va_start (arg, fmt);
  done = __nldbl_vsprintf (s, fmt, arg);
  va_end (arg);

  return done;
}
extern __typeof (sprintf) _IO_sprintf attribute_hidden;
strong_alias (sprintf, _IO_sprintf)
