#include "nldbl-compat.h"

int
attribute_hidden
_IO_vsprintf (char *__restrict string, const char *__restrict fmt, va_list ap)
{
  return __nldbl_vsprintf (string, fmt, ap);
}
extern __typeof (_IO_vsprintf) vsprintf attribute_hidden;
weak_alias (_IO_vsprintf, vsprintf)
