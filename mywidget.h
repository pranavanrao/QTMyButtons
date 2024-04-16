#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();

private:
    QPushButton *m_buttons[5];
    QHBoxLayout *m_hLayout;
};
#endif // MYWIDGET_H
