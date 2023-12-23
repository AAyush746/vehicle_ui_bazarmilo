#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connect the login button click to the slot function
    connect(ui->btnLogin, &QPushButton::clicked, this, &MainWindow::onLoginClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onLoginClicked()
{
    // Get the entered username and password
    QString username = ui->lineEditUsername->text();
    QString password = ui->lineEditPassword->text();

    // Perform your login logic here (e.g., check credentials)

    // For simplicity, just show a message box
    QMessageBox::information(this, "Login", "Login Successful!");
}

