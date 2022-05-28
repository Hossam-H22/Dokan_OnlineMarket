#ifndef WALLETGUIWIDGET_H
#define WALLETGUIWIDGET_H

#include <QWidget>
#include "Product.h"
#include "Seller.h"

namespace Ui {
class WalletGuiWidget;
}

class WalletGuiWidget : public QWidget
{
    Q_OBJECT

public:
    explicit WalletGuiWidget(Seller::WalletData wal, QWidget *parent = nullptr);
    ~WalletGuiWidget();



private:
    Ui::WalletGuiWidget *ui;
};

#endif // WALLETGUIWIDGET_H
