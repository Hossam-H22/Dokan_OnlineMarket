#ifndef ERRORPAGE_H
#define ERRORPAGE_H

#include <QDialog>

namespace Ui {
class ErrorPage;
}

class ErrorPage : public QDialog
{
    Q_OBJECT

public:
    explicit ErrorPage(QWidget *parent = nullptr);
    ~ErrorPage();

private:
    Ui::ErrorPage *ui;
};

#endif // ERRORPAGE_H
