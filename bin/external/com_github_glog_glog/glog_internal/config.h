#ifndef GLOG_CONFIG_H
#define GLOG_CONFIG_H

/* define if glog doesn't use RTTI */
//cmakedefine DISABLE_RTTI

/* Namespace for Google classes */
//cmakedefine GOOGLE_NAMESPACE ${GOOGLE_NAMESPACE}

/* Define if you have the `dladdr' function */
//cmakedefine HAVE_DLADDR

/* Define if you have the `snprintf' function */
//cmakedefine HAVE_SNPRINTF

/* Define to 1 if you have the <dlfcn.h> header file. */
//cmakedefine HAVE_DLFCN_H

/* Define to 1 if you have the <execinfo.h> header file. */
//cmakedefine HAVE_EXECINFO_H

/* Define if you have the `fcntl' function */
//cmakedefine HAVE_FCNTL

/* Define to 1 if you have the <glob.h> header file. */
//cmakedefine HAVE_GLOB_H

/* Define to 1 if you have the <inttypes.h> header file. */
//cmakedefine HAVE_INTTYPES_H ${HAVE_INTTYPES_H}

/* Define to 1 if you have the `pthread' library (-lpthread). */
//cmakedefine HAVE_LIBPTHREAD

/* Define to 1 if you have the <libunwind.h> header file. */
//cmakedefine HAVE_LIBUNWIND_H

/* define if you have google gflags library */
//cmakedefine HAVE_LIB_GFLAGS

/* define if you have google gmock library */
//cmakedefine HAVE_LIB_GMOCK

/* define if you have google gtest library */
//cmakedefine HAVE_LIB_GTEST

/* define if you have libunwind */
//cmakedefine HAVE_LIB_UNWIND

/* Define to 1 if you have the <memory.h> header file. */
//cmakedefine HAVE_MEMORY_H

/* define to disable multithreading support. */
//cmakedefine NO_THREADS

/* define if the compiler implements namespaces */
//cmakedefine HAVE_NAMESPACES

/* Define if you have the 'pread' function */
//cmakedefine HAVE_PREAD

/* Define if you have POSIX threads libraries and header files. */
//cmakedefine HAVE_PTHREAD

/* Define to 1 if you have the <pwd.h> header file. */
//cmakedefine HAVE_PWD_H

/* Define if you have the 'pwrite' function */
//cmakedefine HAVE_PWRITE

/* define if the compiler implements pthread_rwlock_* */
//cmakedefine HAVE_RWLOCK

/* Define if you have the 'sigaction' function */
//cmakedefine HAVE_SIGACTION

/* Define if you have the `sigaltstack' function */
//cmakedefine HAVE_SIGALTSTACK

/* Define to 1 if you have the <stdint.h> header file. */
//cmakedefine HAVE_STDINT_H ${HAVE_STDINT_H}

/* Define to 1 if you have the <stdlib.h> header file. */
//cmakedefine HAVE_STDLIB_H

/* Define to 1 if you have the <strings.h> header file. */
//cmakedefine HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
//cmakedefine HAVE_STRING_H

/* Define to 1 if you have the <syscall.h> header file. */
//cmakedefine HAVE_SYSCALL_H

/* Define to 1 if you have the <syslog.h> header file. */
//cmakedefine HAVE_SYSLOG_H

/* Define to 1 if you have the <sys/stat.h> header file. */
//cmakedefine HAVE_SYS_STAT_H

/* Define to 1 if you have the <sys/syscall.h> header file. */
//cmakedefine HAVE_SYS_SYSCALL_H

/* Define to 1 if you have the <sys/time.h> header file. */
//cmakedefine HAVE_SYS_TIME_H

/* Define to 1 if you have the <sys/types.h> header file. */
//cmakedefine HAVE_SYS_TYPES_H ${HAVE_SYS_TYPES_H}

/* Define to 1 if you have the <sys/ucontext.h> header file. */
//cmakedefine HAVE_SYS_UCONTEXT_H

/* Define to 1 if you have the <sys/utsname.h> header file. */
//cmakedefine HAVE_SYS_UTSNAME_H

/* Define to 1 if you have the <sys/wait.h> header file. */
//cmakedefine HAVE_SYS_WAIT_H

/* Define to 1 if you have the <ucontext.h> header file. */
//cmakedefine HAVE_UCONTEXT_H

/* Define to 1 if you have the <unistd.h> header file. */
//cmakedefine HAVE_UNISTD_H ${HAVE_UNISTD_H}

/* Define to 1 if you have the <unwind.h> header file. */
//cmakedefine HAVE_UNWIND_H ${HAVE_UNWIND_H}

/* define if the compiler supports using expression for operator */
//cmakedefine HAVE_USING_OPERATOR

/* define if your compiler has __attribute__ */
//cmakedefine HAVE___ATTRIBUTE__

/* define if your compiler has __builtin_expect */
//cmakedefine HAVE___BUILTIN_EXPECT ${HAVE___BUILTIN_EXPECT}

/* define if your compiler has __sync_val_compare_and_swap */
//cmakedefine HAVE___SYNC_VAL_COMPARE_AND_SWAP

/* define if symbolize support is available */
//cmakedefine HAVE_SYMBOLIZE

/* define if localtime_r is available in time.h */
//cmakedefine HAVE_LOCALTIME_R

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
//cmakedefine LT_OBJDIR

/* Name of package */
//cmakedefine PACKAGE

/* Define to the address where bug reports for this package should be sent. */
//cmakedefine PACKAGE_BUGREPORT

/* Define to the full name of this package. */
//cmakedefine PACKAGE_NAME

/* Define to the full name and version of this package. */
//cmakedefine PACKAGE_STRING

/* Define to the one symbol short name of this package. */
//cmakedefine PACKAGE_TARNAME

/* Define to the home page for this package. */
//cmakedefine PACKAGE_URL

/* Define to the version of this package. */
//cmakedefine PACKAGE_VERSION

/* How to access the PC from a struct ucontext */
//cmakedefine PC_FROM_UCONTEXT

/* define if we should print file offsets in traces instead of symbolizing. */
//cmakedefine PRINT_UNSYMBOLIZED_STACK_TRACES

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
//cmakedefine PTHREAD_CREATE_JOINABLE

/* The size of `void *', as computed by sizeof. */
//cmakedefine SIZEOF_VOID_P ${SIZEOF_VOID_P}

/* Define to 1 if you have the ANSI C header files. */
//cmakedefine STDC_HEADERS

/* the namespace where STL code like vector<> is defined */
//cmakedefine STL_NAMESPACE ${STL_NAMESPACE}

/* location of source code */
//cmakedefine TEST_SRC_DIR ${TEST_SRC_DIR}

/* Define to necessary thread-local storage attribute. */
//cmakedefine GLOG_THREAD_LOCAL_STORAGE ${GLOG_THREAD_LOCAL_STORAGE}

/* Check whether aligned_storage and alignof present */
//cmakedefine HAVE_ALIGNED_STORAGE ${HAVE_ALIGNED_STORAGE}

/* Version number of package */
//cmakedefine VERSION

#ifdef GLOG_BAZEL_BUILD

/* TODO(rodrigoq): remove this workaround once bazel#3979 is resolved:
 * https://github.com/bazelbuild/bazel/issues/3979 */
#define _START_GOOGLE_NAMESPACE_ namespace GOOGLE_NAMESPACE {

#define _END_GOOGLE_NAMESPACE_ }

#else

/* Stops putting the code inside the Google namespace */
//cmakedefine _END_GOOGLE_NAMESPACE_ ${_END_GOOGLE_NAMESPACE_}

/* Puts following code inside the Google namespace */
//cmakedefine _START_GOOGLE_NAMESPACE_ ${_START_GOOGLE_NAMESPACE_}

#endif

#endif  // GLOG_CONFIG_H
