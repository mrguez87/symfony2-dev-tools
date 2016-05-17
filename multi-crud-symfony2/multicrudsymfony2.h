#ifndef MULTICRUDSYMFONY2_H
#define MULTICRUDSYMFONY2_H

#include <QMainWindow>

namespace Ui {
class MultiCrudSymfony2;
}

class MultiCrudSymfony2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MultiCrudSymfony2(QWidget *parent = 0);
    ~MultiCrudSymfony2();

private slots:
    void on_interpretePhpPushButton_clicked();

    void on_proyectoPushButton_clicked();

    void on_EntidadesPushButton_clicked();

private:
    Ui::MultiCrudSymfony2 *ui;
};

#endif // MULTICRUDSYMFONY2_H
