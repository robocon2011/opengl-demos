#ifndef SKYBOXSCENE_H
#define SKYBOXSCENE_H

#include <abstractscene.h>

#include <QMatrix4x4>

class SkyBox;

class SkyBoxScene : public AbstractScene
{
    Q_OBJECT

public:
    SkyBoxScene( QObject* parent = 0 );

    virtual void initialise();
    virtual void update( float t );
    virtual void render();
    virtual void resize( int w, int h );

    void setYawSpeed( float yawSpeed );
    void setPitchSpeed( float pitchSpeed );

private:
    float m_theta; // rotation of camera about z-axis
    float m_phi;   // azimuthal camera angle
    QMatrix4x4 m_modelMatrix;
    QMatrix4x4 m_viewMatrix;
    QMatrix4x4 m_projectionMatrix;

    SkyBox* m_skyBox;

    float m_yawSpeed;
    float m_pitchSpeed;
};

#endif // SKYBOXSCENE_H
