#include <asm/ftrace.h>
<<<<<<< HEAD
#include <asm/uaccess.h>
=======
#include <linux/uaccess.h>
>>>>>>> 2b3b80e8b9daba3e8e12f23f1acde4bd0ec88427
#include <asm/string.h>
#include <asm/page.h>
#include <asm/checksum.h>

#include <asm-generic/asm-prototypes.h>

#include <asm/page.h>
#include <asm/pgtable.h>
#include <asm/special_insns.h>
#include <asm/preempt.h>
<<<<<<< HEAD
#include <asm/asm.h>
=======
>>>>>>> 2b3b80e8b9daba3e8e12f23f1acde4bd0ec88427

#ifndef CONFIG_X86_CMPXCHG64
extern void cmpxchg8b_emu(void);
#endif
<<<<<<< HEAD

#ifdef CONFIG_RETPOLINE
#ifdef CONFIG_X86_32
#define INDIRECT_THUNK(reg) extern asmlinkage void __x86_indirect_thunk_e ## reg(void);
#else
#define INDIRECT_THUNK(reg) extern asmlinkage void __x86_indirect_thunk_r ## reg(void);
INDIRECT_THUNK(8)
INDIRECT_THUNK(9)
INDIRECT_THUNK(10)
INDIRECT_THUNK(11)
INDIRECT_THUNK(12)
INDIRECT_THUNK(13)
INDIRECT_THUNK(14)
INDIRECT_THUNK(15)
#endif
INDIRECT_THUNK(ax)
INDIRECT_THUNK(bx)
INDIRECT_THUNK(cx)
INDIRECT_THUNK(dx)
INDIRECT_THUNK(si)
INDIRECT_THUNK(di)
INDIRECT_THUNK(bp)
#endif /* CONFIG_RETPOLINE */
=======
>>>>>>> 2b3b80e8b9daba3e8e12f23f1acde4bd0ec88427
