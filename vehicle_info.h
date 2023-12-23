#ifndef VEHICLE_INFO_H
#define VEHICLE_INFO_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class vehicle_info; }
QT_END_NAMESPACE

class vehicle_info : public QMainWindow
{
    Q_OBJECT

public:
    vehicle_info(QWidget *parent = nullptr);
    ~vehicle_info();

private:
    Ui::vehicle_info *ui;
};
#endif // VEHICLE_INFO_H
