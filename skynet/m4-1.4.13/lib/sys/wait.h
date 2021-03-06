/* DO NOT EDIT! GENERATED AUTOMATICALLY! */
/* A POSIX-like <sys/wait.h>.
   Copyright (C) 2001-2003, 2005-2008 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.  */


#ifndef _GL_SYS_WAIT_H

#if __GNUC__ >= 3
#pragma GCC system_header
#endif

/* The include_next requires a split double-inclusion guard.  */
#if !((defined _WIN32 || defined __WIN32__) && ! defined __CYGWIN__)
# include_next <sys/wait.h>
#endif

#ifndef _GL_SYS_WAIT_H
#define _GL_SYS_WAIT_H

/* The definition of GL_LINK_WARNING is copied here.  */
/* GL_LINK_WARNING("literal string") arranges to emit the literal string as
   a linker warning on most glibc systems.
   We use a linker warning rather than a preprocessor warning, because
   #warning cannot be used inside macros.  */
#ifndef GL_LINK_WARNING
  /* This works on platforms with GNU ld and ELF object format.
     Testing __GLIBC__ is sufficient for asserting that GNU ld is in use.
     Testing __ELF__ guarantees the ELF object format.
     Testing __GNUC__ is necessary for the compound expression syntax.  */
# if defined __GLIBC__ && defined __ELF__ && defined __GNUC__
#  define GL_LINK_WARNING(message) \
     GL_LINK_WARNING1 (__FILE__, __LINE__, message)
#  define GL_LINK_WARNING1(file, line, message) \
     GL_LINK_WARNING2 (file, line, message)  /* macroexpand file and line */
#  define GL_LINK_WARNING2(file, line, message) \
     GL_LINK_WARNING3 (file ":" #line ": warning: " message)
#  define GL_LINK_WARNING3(message) \
     ({ static const char warning[sizeof (message)]		\
          __attribute__ ((__unused__,				\
                          __section__ (".gnu.warning"),		\
                          __aligned__ (1)))			\
          = message "\n";					\
        (void)0;						\
     })
# else
#  define GL_LINK_WARNING(message) ((void) 0)
# endif
#endif

#if !((defined _WIN32 || defined __WIN32__) && ! defined __CYGWIN__)
/* Unix API.  */

/* The following macros apply to an argument x, that is a status of a process,
   as returned by waitpid().
   On nearly all systems, including Linux/x86, WEXITSTATUS are bits 15..8 and
   WTERMSIG are bits 7..0, while BeOS uses the opposite.  Therefore programs
   have to use the abstract macros.  */

/* For valid x, exactly one of WIFSIGNALED(x), WIFEXITED(x), WIFSTOPPED(x)
   is true.  */
# ifndef WIFSIGNALED
#  define WIFSIGNALED(x) (WTERMSIG (x) != 0 && WTERMSIG(x) != 0x7f)
# endif
# ifndef WIFEXITED
#  define WIFEXITED(x) (WTERMSIG (x) == 0)
# endif
# ifndef WIFSTOPPED
#  define WIFSTOPPED(x) (WTERMSIG (x) == 0x7f)
# endif

/* The termination signal. Only to be accessed if WIFSIGNALED(x) is true.  */
# ifndef WTERMSIG
#  define WTERMSIG(x) ((x) & 0x7f)
# endif

/* The exit status. Only to be accessed if WIFEXITED(x) is true.  */
# ifndef WEXITSTATUS
#  define WEXITSTATUS(x) (((x) >> 8) & 0xff)
# endif

/* True if the process dumped core.  Not standardized by POSIX.  */
# ifndef WCOREDUMP
#  define WCOREDUMP(x) ((x) & 0x80)
# endif

# ifdef __cplusplus
extern "C" {
# endif

/* Declarations of functions.  */

# ifdef __cplusplus
}
# endif

#else
/* Native Windows API.  */

# include <process.h>

# define waitpid(pid,statusp,options) _cwait (statusp, pid, WAIT_CHILD)

/* The following macros apply to an argument x, that is a status of a process,
   as returned by waitpid() or, equivalently, _cwait() or GetExitCodeProcess().
   This value is simply an 'int', not composed of bit fields.  */

/* When an unhandled fatal signal terminates a process, the exit code is 3.  */
# define WIFSIGNALED(x) ((x) == 3)
# define WIFEXITED(x) ((x) != 3)
# define WIFSTOPPED(x) 0

/* The signal that terminated a process is not known posthum.  */
# define WTERMSIG(x) SIGTERM

# define WEXITSTATUS(x) (x)

/* There are no core dumps.  */
# define WCOREDUMP(x) 0

#endif

#endif /* _GL_SYS_WAIT_H */
#endif /* _GL_SYS_WAIT_H */
