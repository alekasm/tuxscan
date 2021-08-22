//Written by Aleksander Krimsky | www.krimsky.net
#include <QApplication>
#include <QPushButton>
#include <QMainWindow>
#include <QtWidgets>

void ButtonAction()
{
  printf("Pushed!\n");
}

class MainWindow : public QMainWindow
{
public:
  MainWindow()
  {
    resize(320, 240);
    setWindowTitle("tuxscan");
    btn_scan = new QPushButton("Scan", this);
    btn_scan->setGeometry(0, 0, 75, 30);    
    btn_scan->show();
    connect(btn_scan, &QPushButton::released, this, &ButtonAction);
  }
  ~MainWindow()
  {
    if(btn_scan) delete btn_scan;
  }
private:
  QPushButton* btn_scan;
};

int main(int argc, char **argv)
{
 QApplication app (argc, argv);
 MainWindow window;
 window.show();
 return app.exec();
}
