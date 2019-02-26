#ifndef LAUPCLVTKWIDGET_H
#define LAUPCLVTKWIDGET_H

#include <QWidget>
#include <pcl/point_cloud.h>

class LAUPclVtkWidget : public QWidget
{
    Q_OBJECT

public:
    LAUPclVtkWidget(QWidget *parent = nullptr);
    ~LAUPclVtkWidget();
};

#endif // LAUPCLVTKWIDGET_H
