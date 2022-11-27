#include "nldbl-compat.h"

int
attribute_hidden
__vsprintf_chk (char *__restrict string, int flag, size_t slen, const char *__restrict fmt,
		va_list ap)
{
  return __nldbl___vsprintf_chk (string, flag, slen, fmt, ap);
}
