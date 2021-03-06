#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
signals:
    void getText(QString nick_name, QString describe);
private slots:
    void on_pushButton_clicked();
private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
