#ifndef _FRAME_WORK_H
#define _FRAME_WORK_H

#define WIN32_LEAN_AND_MEAN

#include <Windows.h>

class FrameWork
{
public:
	FrameWork();
	virtual ~FrameWork();

	bool Initialize();
	void Run();

private:
	bool CreateDXWindow(char* windowTitle, int x, int y, int width, int height);

	char* m_applicationName;
	HINSTANCE m_hInstance;
};

#endif // !_FRAME_WORK_H