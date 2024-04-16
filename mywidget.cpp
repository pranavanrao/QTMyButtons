#include "mywidget.h"

#include <QPushButton>
#include <QHBoxLayout>
#include <QStringList>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    QStringList fonts = {"Arial","Helvetica","Times","Helvetica","Times"};
    this->m_hLayout = new QHBoxLayout;
    for (int i = 0; i < 5; ++i) {
        m_buttons[i] = new QPushButton(fonts.at(i));
        m_hLayout -> addWidget(m_buttons[i]);
    }

    this->setLayout(m_hLayout);
}

MyWidget::~MyWidget() {}
