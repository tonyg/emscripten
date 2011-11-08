#ifndef _SYSLOG_H
#define _SYSLOG_H

#define	LOG_EMERG	0
#define	LOG_ALERT	1
#define	LOG_CRIT	2
#define	LOG_ERR		3
#define	LOG_WARNING	4
#define	LOG_NOTICE	5
#define	LOG_INFO	6
#define	LOG_DEBUG	7

extern void closelog(void);
extern void openlog(const char *ident, int logopt, int facility);
extern int setlogmask(int maskpri);
extern void syslog(int priority, const char *message, ...);

#endif
