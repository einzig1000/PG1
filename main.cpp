#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <time.h>
using namespace std;

char command;
int loop = 0;

int main()
{
	srand((unsigned int)time(NULL));
	while (loop != 1)
	{

		printf("�R���\�[���A�v���P�[�V�������I������ꍇ�͐����̂P����͂��Ă�������\n");
		command = _getch();
		if (command == '1') loop = 1;
	}
	return 0;
}
