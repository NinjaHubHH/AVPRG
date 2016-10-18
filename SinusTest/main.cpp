#include <QDebug>
#include "sinus.h"


int main(int argc, char *argv[])
{
    Sinus sinus;
    for(int i = 0; i < 1000; i++){
        qDebug() << i << " " << sinus.getValue();
    }
    return 0;
}
