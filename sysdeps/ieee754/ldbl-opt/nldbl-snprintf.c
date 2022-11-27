#include "nldbl-compat.h"

int
attribute_hidden
weak_function
snprintf (char *__restrict s, size_t maxlen, const char *__restrict fmt, ...)
{
  va_list arg;
  int done;

  va_start (arg, fmt);
  done = __nldbl_vsnprintf (s, maxlen, fmt, arg);
  va_end (arg);

  return done;
}
