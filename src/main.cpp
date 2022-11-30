#include "../include/rigisim_application.h"
#include "../include/info.h"
#include "../include/logger.h"

#include <iostream>
#include <fstream>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    (void)nCmdShow;
    (void)lpCmdLine;
    (void)hPrevInstance;

    std::ifstream debugStream("debug");
    if(debugStream.is_open()) {
        #define RIGISIM_USER_DEBUG
    }

    debugStream.close();

#if RIGISIM_DEBUG
    AllocConsole();

    freopen("CONIN$", "r", stdin);
    freopen("CONOUT$", "w", stdout);
    freopen("CONOUT$", "w", stderr);

    Logger::Initialize();
#endif

#ifdef RIGISIM_USER_DEBUG
#if !RIGISIM_DEBUG
    AllocConsole();

    freopen("CONIN$", "r", stdin);
    freopen("CONOUT$", "w", stdout);
    freopen("CONOUT$", "w", stderr);

    Logger::Initialize();
#endif /* !RIGISIM_DEBUG */
#endif /* RIGISIM_USER_DEBUG */

    Logger::DebugLine("Hello Developer!\n");
    Logger::DebugLine("This is RIGISIM v" RIGISIM_VERSION " built on " RIGISIM_BUILD_DATE " made by " RIGISIM_AUTHOR);
    Logger::DebugLine("Initiating RIGISIM...");

    RigiSimApplication app;
    app.Initialize((void *)&hInstance, ysContextObject::DeviceAPI::DirectX11);
    app.Run();
    app.Destroy();

    Logger::Finalize();

    return 0;
}
