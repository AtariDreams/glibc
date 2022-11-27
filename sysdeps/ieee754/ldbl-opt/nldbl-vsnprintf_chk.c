#include "nldbl-compat.h"

int
attribute_hidden
__vsnprintf_chk (char *__restrict string, size_t maxlen, int flag, size_t slen,
		 const char *__restrict fmt, va_list ap)
{
  return __nldbl___vsnprintf_chk (string, maxlen, flag, slen, fmt, ap);
}
