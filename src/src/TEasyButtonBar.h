#ifndef TEASYBUTTONBAR_H
#define TEASYBUTTONBAR_H





#include <QDockWidget>
#include <QDebug>
#include <QGridLayout>
#include "TFlipButton.h"
#include "TAction.h"

class Host;
class TFlipButton;
class TAction;

class TEasyButtonBar : public QWidget
{
Q_OBJECT

public:
                     TEasyButtonBar( TAction *, QString, QWidget * pW = 0 );
    void             addButton( TFlipButton * pW );
    void             setVerticalOrientation(){ mVerticalOrientation = true; }
    void             setHorizontalOrientation(){ mVerticalOrientation = false; }
    void             clear();
    void             finalize();
    TAction *        mpTAction;
    void             recordMove(){ mRecordMove = true; }

//private:

    bool             mVerticalOrientation;
    QWidget *        mpWidget;
    QString          mName;
    bool             mRecordMove;
    QGridLayout *    mpLayout;
    int              mItemCount;
    QWidget *        mpBar;
    std::list<TFlipButton *> mButtonList;

signals:


public slots:

    void slot_pressed();

};



#endif // TEASYBUTTONBAR_H
