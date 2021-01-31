#include <linux/bitops.h>
<<<<<<< HEAD
#undef __memset
extern void *__memset(void *, int, __kernel_size_t);
#undef __memcpy
extern void *__memcpy(void *, const void *, __kernel_size_t);
#undef __memmove
extern void *__memmove(void *, const void *, __kernel_size_t);
#undef memset
extern void *memset(void *, int, __kernel_size_t);
#undef memcpy
extern void *memcpy(void *, const void *, __kernel_size_t);
#undef memmove
=======
extern void *__memset(void *, int, __kernel_size_t);
extern void *__memcpy(void *, const void *, __kernel_size_t);
extern void *__memmove(void *, const void *, __kernel_size_t);
extern void *memset(void *, int, __kernel_size_t);
extern void *memcpy(void *, const void *, __kernel_size_t);
>>>>>>> 2b3b80e8b9daba3e8e12f23f1acde4bd0ec88427
extern void *memmove(void *, const void *, __kernel_size_t);
