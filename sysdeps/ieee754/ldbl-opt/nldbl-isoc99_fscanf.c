#include "nldbl-compat.h"

int
attribute_hidden
__isoc99_fscanf (FILE *__restrict stream, const char *__restrict fmt, ...)
{
  va_list arg;
  int done;

  va_start (arg, fmt);
  done = __nldbl___isoc99_vfscanf (stream, fmt, arg);
  va_end (arg);

  return done;
}
