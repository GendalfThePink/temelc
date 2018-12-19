void uyut(int milisaniye)
{
	Sleep(milisaniye);
}

void Ekranitemizle()
{
 system("@cls||clear");	
}

void basaal()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = {0, 0};
    SetConsoleCursorPosition(hConsole, pos);
}
