#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
int main()
{
	if (fork() == 0)
	{
	char cmd[10000]; 
	for (int i = 0; i < 4; i++)
	{
		sprintf(cmd, "cp -r  Desktop\\ Goose.app    %d.app", i);
		system(cmd);
		system("sleep 10 ");
		sprintf(cmd, "open %d.app", i);
		system(cmd);
	}
	for (int i = 6; i < 8; i++)
	{
		sprintf(cmd, "cp -r  Desktop\\ Goose.app    %d.app", i);
		system(cmd);
		system("sleep 10 ");
		sprintf(cmd, "open %d.app", i);
		system(cmd);
	}
	system("sleep 10800");
	for (int i = 0; i < 30; i++)
	{
		sprintf(cmd, "rm -rf %d.app 2> /dev/null", i);
		system(cmd);
		system("kill \"$(pgrep Goos | tail -1)\" > /dev/null 2> /dev/null ");
	}
	system ("cd ../..");
	system("rm -rf Desktop\\ Goose 2> /dev/null > /dev/null");
	}
	
}



//cd kaak-mac/Desktop\ Goose\ for\ Mac\ v0.22 && \
  screen -d -m "./kaak 
