# include <graphics.h>
# include <windows.h>
# include <MMSystem.h>				//����������Ҫ��ͷ�ļ�
# pragma comment(lib,"winmm.lib")	//���߱�����,����winmm.lib���ļ�

int main()
{
	initgraph(800,450);

	loadimage(0,_T("���־���.jpg"));
	//�ظ�����"���.mp3"
	mciSendString(_T("play ���.mp3 repeat"),0,0,0);

	system("pause");

    closegraph();

}