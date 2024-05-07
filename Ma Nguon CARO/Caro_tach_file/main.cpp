#include"main_version.h"

int  main()
{
	FixConsoleWindow();
	ShowScrollbar(0);
	start_menu();
	thread clock;
	clock = thread(Time);
	clock.detach();
	main_Menu();
	return 0;
}