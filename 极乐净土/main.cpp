# include <graphics.h>
# include <windows.h>
# include <MMSystem.h>				//播放音乐需要的头文件
# pragma comment(lib,"winmm.lib")	//告诉编译器,加载winmm.lib库文件

int main()
{
	initgraph(800,450);

	loadimage(0,_T("极乐净土.jpg"));
	//重复播放"天份.mp3"
	mciSendString(_T("play 天份.mp3 repeat"),0,0,0);

	system("pause");

    closegraph();

}