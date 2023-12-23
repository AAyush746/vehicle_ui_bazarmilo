#include "vehicle_info.h"
#include "ui_vehicle_info.h"

vehicle_info::vehicle_info(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::vehicle_info)
{
    ui->setupUi(this);
}

vehicle_info::~vehicle_info()
{
    delete ui;
}

