#ifndef CFRAME_H
#define CFRAME_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class cframe;
}
QT_END_NAMESPACE

class cframe : public QMainWindow
{
    Q_OBJECT

public:
    cframe(QWidget *parent = nullptr);
    ~cframe();

private slots:
    void on_AggBtn_clicked();

    void on_CB_DESCUENTO_currentIndexChanged(int index);

    void on_btnMostrar_clicked();

private:
    Ui::cframe *ui;
};
#endif // CFRAME_H
