#include "clineedit.h"

CLineEdit::CLineEdit(QWidget *parent) :
    QLineEdit(parent),
    m_clearButton(new QToolButton (this))
{
    m_clearButton->setCursor(Qt::PointingHandCursor);
    connect (m_clearButton, SIGNAL(clicked()), this, SLOT(clear()));

    int frameWidth = style()->pixelMetric(QStyle::PM_DefaultFrameWidth);
    setStyleSheet(QString("QLineEdit { padding-right: %1px; } ")
                  .arg(m_clearButton->sizeHint().width() + frameWidth + 1));

    QSize msz = minimumSizeHint();
    setMinimumSize(qMax(msz.width(), m_clearButton->sizeHint().height() + frameWidth * 2 + 2),
                   qMax(msz.height(), m_clearButton->sizeHint().height() + frameWidth * 2 + 2));
}

void CLineEdit::resizeEvent(QResizeEvent *)
{
    QSize sz = m_clearButton->sizeHint();
    int frameWidth = style()->pixelMetric(QStyle::PM_DefaultFrameWidth);
    m_clearButton->move(rect().right() - frameWidth - sz.width(),
                      (rect().bottom() + 1 - sz.height())/2);
}

void CLineEdit::setClearButtonIcon(const QIcon &ic)
{
    m_clearButton->setIcon(ic);
}
