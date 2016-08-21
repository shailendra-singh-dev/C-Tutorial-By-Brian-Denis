#if !defined(C_PRE_PROCESSOR)  //#ifndef C_PRE_PROCESSOR
#define C_PRE_PROCESSOR

#define forever for(;;)
#define MAX(A,B) (A>B?A:B)
#define square(x) x*x
#define printexpres(expre) printf(#expre"=%g",expre)
#define paste(front,back) front ## back

#if SYSTEM == SYS
#define HDR ="hdr.h"
#elif SYSTEM == BSD
#define HDR ="bsd.h"
#elif SYSTEM == MSDOS
#define HDR ="msdos.h"
#else
#define HDR ="default.h"
#endif

void preprocessor();
#endif
