#include <windows.h>

int APIENTRY WinMain(HINSTANCE hInst, HINSTANCE hPrev, LPSTR cmdline, int cmdshow)
{
  MessageBox(HWND_DESKTOP,"Helloworld!","win32api",MB_ICONINFORMATION);
  return 0;
}
