#include <QApplication>
#include <QWidget>
#include <QHBoxLayout>
#include "clineedit.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	QWidget w;
	QHBoxLayout h;
	
	CLineEdit *c = new CLineEdit(&w);
	c->setClearButtonIcon (QIcon(":/clear.png"));

	w.setLayout (&h);
	h.addWidget (c);

	w.show();
    
    return a.exec();
}
