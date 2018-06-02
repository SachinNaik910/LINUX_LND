#include <unistd.h>
#include <stdio.h>

int main()
{
    pid_t pid_cp,ppid_cp;     /*p->parent cp->calling process*/
    pid_t ruid_cp,euid_cp;    /*r->real e->effective u->user */
    pid_t rgid_cp,egid_cp;   /*g->group*/

    pid_cp =  getpid();
    printf("pid_cp = %d\n",pid_cp);
    ppid_cp = getppid();
    printf("ppid_cp = %d\n",ppid_cp);
    ruid_cp = getuid();
    printf("ruid_cp = %d\n",ruid_cp);
    euid_cp = geteuid();
    printf("euid_cp = %d\n",euid_cp);
    rgid_cp = getgid();
    printf("rgid_cp = %d\n",rgid_cp);
    egid_cp = getegid();
    printf("egid_cp = %d\n",egid_cp);
    
    return 0;	
}
