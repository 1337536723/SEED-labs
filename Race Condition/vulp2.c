/*	vulp2.c	*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(){
	
	char* fn="/tmp/XYZ";
	char buffer[60];
	FILE *fp;

	/*get user input*/
	scanf("%50s",buffer);
	uid_t euid=geteuid();
	uid_t uid=getuid();
	seteuid(uid);
	if (!access(fn,W_OK)){
		
		fp = fopen (fn,"a+");
		fwrite("\n",sizeof(char),1, fp);
		fwrite(buffer,sizeof (char), strlen(buffer), fp);
		fclose(fp);
	}
	else
		printf("No permission \n");
	seteuid(euid);
}