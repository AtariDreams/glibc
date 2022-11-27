#include "nldbl-compat.h"

attribute_hidden
int
__asprintf (char **__restrict string_ptr, const char *__restrict fmt, ...)
{
  va_list arg;
  int done;

  va_start (arg, fmt);
  done = __nldbl_vasprintf (string_ptr, fmt, arg);
  va_end (arg);

  return done;
}
extern __typeof (__asprintf) asprintf attribute_hidden;
weak_alias (__asprintf, asprintf)
