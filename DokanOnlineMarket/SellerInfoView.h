#ifndef SELLERINFOVIEW_H
#define SELLERINFOVIEW_H

#include <QMainWindow>

namespace Ui {
class SellerInfoView;
}

class SellerInfoView : public QMainWindow
{
    Q_OBJECT

public:
    explicit SellerInfoView(QWidget *parent = nullptr);
    ~SellerInfoView();

private:
    Ui::SellerInfoView *ui;
};

#endif // SELLERINFOVIEW_H
