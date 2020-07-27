/* libjpeg-turbo build number */
#define BUILD  "20200727"

/* Compiler's inline keyword */
#undef inline

/* How to obtain function inlining. */
#define INLINE  __inline__ __attribute__((always_inline))

/* How to obtain thread-local storage */
#define THREAD_LOCAL  __thread

/* Define to the full name of this package. */
#define PACKAGE_NAME  "libjpeg-turbo"

/* Version number of package */
#define VERSION  "2.0.6"

/* The size of `size_t', as computed by sizeof. */
/* The size of `size_t', as reported by the compiler through the
 * builtin macro __SIZEOF_SIZE_T__. If the compiler does not
 * report __SIZEOF_SIZE_T__ add a custom rule for the compiler
 * here. */
#ifdef __SIZEOF_SIZE_T__
  #define SIZEOF_SIZE_T __SIZEOF_SIZE_T__
#else
  #error cannot determine the size of size_t
#endif

/* Define if your compiler has __builtin_ctzl() and sizeof(unsigned long) == sizeof(size_t). */
#define HAVE_BUILTIN_CTZL

/* Define to 1 if you have the <intrin.h> header file. */
/* #undef HAVE_INTRIN_H */

#if defined(_MSC_VER) && defined(HAVE_INTRIN_H)
#if (SIZEOF_SIZE_T == 8)
#define HAVE_BITSCANFORWARD64
#elif (SIZEOF_SIZE_T == 4)
#define HAVE_BITSCANFORWARD
#endif
#endif
