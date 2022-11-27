#include "nldbl-compat.h"

int
attribute_hidden
weak_function
vasprintf (char **__restrict result_ptr, const char *__restrict fmt, va_list ap)
{
  return __nldbl_vasprintf (result_ptr, fmt, ap);
}
