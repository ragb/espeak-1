#ifndef _SEM_TIMEDWAIT_H_
#define _SEM_TIMEDWAIT_H_
int sem_timedwait(sem_t *sem, const struct timespec *abs_timeout);
#endif