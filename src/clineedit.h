#ifndef CLINEEDIT_H
#define CLINEEDIT_H

#include <QLineEdit>
#include <QToolButton>
#include <QEvent>
#include <QStyle>

class CLineEdit : public QLineEdit
{
    Q_OBJECT
public:
    explicit CLineEdit(QWidget *parent = 0);

    /*!
     \brief set icon of clear button, default none
     \param QIcon

    */
    void setClearButtonIcon (const QIcon & ic);
    
protected:
    void resizeEvent(QResizeEvent *);

private:
    QToolButton *m_clearButton;

signals:
    
public slots:
    
};

#endif // CLINEEDIT_H
