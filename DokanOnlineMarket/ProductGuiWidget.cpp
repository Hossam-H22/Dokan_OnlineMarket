#include "ProductGuiWidget.h"
#include "ui_ProductGuiWidget.h"
#include <QPainter>

ProductGuiWidget::ProductGuiWidget(string name, string path, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ProductGuiWidget)
{
    ui->setupUi(this);
    ui->btn_name->setText(name.c_str());
    QImage img;
    img.load(path.c_str());
//    img.scaledToWidth(ui->lb_photo->width(), Qt::SmoothTransformation);
//    img.scaledToHeight(ui->lb_photo->height(), Qt::SmoothTransformation);
    ui->lb_photo->setPixmap(QPixmap::fromImage(img));


//     QPixmap pix(path.c_str());
//     ui->lb_photo->setPixmap(pix);
//     ui->lb_photo->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
//     QRegion *region = new QRegion(25, 14, ui->lb_photo->width()-50, ui->lb_photo->height()-20, QRegion::Ellipse);
//     QRegion *region = new QRegion(0, 0, ui->lb_photo->width(), ui->lb_photo->height(), QRegion::Ellipse);
//     ui->lb_photo->setMask(*region);



}

ProductGuiWidget::~ProductGuiWidget()
{
    delete ui;
}
