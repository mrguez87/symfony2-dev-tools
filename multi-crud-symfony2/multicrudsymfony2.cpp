#include "multicrudsymfony2.h"
#include "ui_multicrudsymfony2.h"
#include <QFileDialog>

MultiCrudSymfony2::MultiCrudSymfony2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MultiCrudSymfony2)
{
    ui->setupUi(this);
}

MultiCrudSymfony2::~MultiCrudSymfony2()
{
    delete ui;
}

void MultiCrudSymfony2::on_interpretePhpPushButton_clicked()
{
    QString interpretePhp = QFileDialog::getOpenFileName(this,
                                         tr("Seleccionando intérprete de PHP"), ".",
                                         tr("Intérprete de PHP (*.exe)"));
    ui->interpretePhpLineEdit->setText(interpretePhp);
}

void MultiCrudSymfony2::on_proyectoPushButton_clicked()
{
    QString directorioProyecto = QFileDialog::getExistingDirectory(this,
                                          tr("Seleccionando el directorio del proyecto"),
                                          QDir::currentPath() );
    ui->proyectoLineEdit->setText(directorioProyecto);
}

void MultiCrudSymfony2::on_EntidadesPushButton_clicked()
{
    QString directorioEntidades = QFileDialog::getExistingDirectory(this,
                                          tr("Seleccionando el directorio de las entidades"),
                                          QDir::currentPath() );
    ui->EntidadesLineEdit->setText(directorioEntidades);
}
