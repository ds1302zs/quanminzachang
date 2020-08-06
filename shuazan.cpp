
#include <Windows.h>
int n=0x3f3f3f;
void open_web(char* website) {
	ShellExecuteA(0,"open", website,0,0,1);
}
void click(int x, int y) {
	mouse_event(MOUSEEVENTF_ABSOLUTE|MOUSEEVENTF_MOVE, x*65535/1600, y*65535/900, 0, 0);
	Sleep(50);
	mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);//鼠标左键按下
	mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);//鼠标左键抬起
}

int main() {
	char* link="https://wenda.codingtang.com/questions/8444/#PoweredBy全民砸场";
	open_web(link);//打开某个网址
	Sleep(6000);
	while(n--)click(56,265);
	return 0;
}
