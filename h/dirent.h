#ifndef __DIRENT_H__
#define __DIRENT_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <features.h>
#include <bits/dirent.h>

int alphasort(const struct dirent **, const struct dirent **);

DIR *fdopendir(int);
DIR *opendir(const char *);
int  closedir(DIR *);
int  dirfd(DIR *);
void rewinddir(DIR *);

ssize_t        posix_getdents(int, void *, size_t, int);
struct dirent *readdir(DIR *);
int            scandir(const char *, struct dirent ***, int (*)(const struct dirent *), int (*)(const struct dirent **, const struct dirent **));

#if defined(_XOPEN_SOURCE) || defined(_KMIN_SOURCE)
void seekdir(DIR *, long);
long telldir(DIR *);
#endif

#if defined(_GNU_SOURCE) || defined(_BSD_SOURCE)
int getdents(int, struct dirent *, size_t);
#endif

#if defined(_GNU_SOURCE)
int versionsort(const struct dirent **, const struct dirent **);
#endif 

#if !defined(_STRICT_SOURCE) && !defined(_KMIN_SOURCE)
int readdir_r(DIR *__feat_restrict, struct dirent *__feat_restrict, struct dirent **__feat_restrict);
#endif

#if defined(_LARGEFILE64_SOURCE)
#define dirent64      dirent
#define readdir64     readdir
#if !defined(_STRICT_SOURCE)
#define readdir64_r   readdir_r
#endif
#define scandir64     scandir
#define alphasort64   alphasort
#define off64_t       off_t
#define ino64_t       ino_t
#if defined(_GNU_SOURCE) || defined(_BSD_SOURCE)
#define getdents64    getdents
#endif
#if defined(_GNU_SOURCE)
#define versionsort64 versionsort
#endif 
#endif

#define __UNDEF_FEATURES_H__
#include <features.h>

#ifdef __cplusplus
}
#endif
#endif
