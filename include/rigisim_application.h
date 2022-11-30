#ifndef DDEV_RIGISIM_RIGISIM_APPLICATION_H
#define DDEV_RIGISIM_RIGISIM_APPLICATION_H

#include "delta.h"

class RigiSimApplication {
public:
    RigiSimApplication();
    ~RigiSimApplication();

    void Initialize(void *instance, ysContextObject::DeviceAPI api);
    void Run();
    void Destroy();

protected:
    void Process();
    void Render();

    dbasic::ShaderSet m_shaderSet;
    dbasic::DefaultShaders m_shaders;

    dbasic::DeltaEngine m_engine;
    dbasic::AssetManager m_assetManager;

    ysTexture *m_demoTexture;
    float m_currentRotation;
    float m_temperature;
};

#endif /* DDEV_RIGISIM_RIGISIM_APPLICATION_H */
