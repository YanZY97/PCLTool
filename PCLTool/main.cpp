#include "PCLTool.h"
#include <QtWidgets/QApplication>
#include "vtkoutputwindow.h"
#include "RSCamera.h"

int main(int argc, char *argv[])
{
    try
    {
        rs2::pipeline pipe;
        pipe.start();
    }
    catch (const std::exception&)
    {

    }
    vtkOutputWindow::SetGlobalWarningDisplay(0);
    QApplication a(argc, argv);
    PCLTool w;
    w.show();
    return a.exec();
}
