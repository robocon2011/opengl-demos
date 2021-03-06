#include <QGuiApplication>
#include <QSurfaceFormat>

#include "terraintessellationscene.h"
#include "window.h"

int main( int argc, char* argv[] )
{
    QGuiApplication a( argc, argv );

    // Specify the format we wish to use
    QSurfaceFormat format;
    format.setMajorVersion( 4 );
#if !defined(Q_OS_MAC)
    format.setMinorVersion( 0 );
#else
    format.setMinorVersion( 2 );
#endif
    format.setDepthBufferSize( 24 );
    format.setSamples( 4 );
    format.setProfile( QSurfaceFormat::CoreProfile );

    Window w( format );
    w.setScene( new TerrainTessellationScene );

    w.show();
    return a.exec();
}
