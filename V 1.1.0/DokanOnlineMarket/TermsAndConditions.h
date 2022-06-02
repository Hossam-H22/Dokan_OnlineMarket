#ifndef TERMSANDCONDITIONS_H
#define TERMSANDCONDITIONS_H

#include <QDialog>

namespace Ui {
class TermsAndConditions;
}

class TermsAndConditions : public QDialog
{
    Q_OBJECT

public:
    explicit TermsAndConditions(QWidget *parent = nullptr);
    ~TermsAndConditions();

private slots:

    void on_ok_clicked();

private:
    Ui::TermsAndConditions *ui;
};

#endif // TERMSANDCONDITIONS_H
