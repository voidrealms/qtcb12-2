#ifndef FELINE_H
#define FELINE_H

#include <QObject>
#include <QDebug>

class feline : public QObject
{
    Q_OBJECT
public:
    explicit feline(QObject *parent = nullptr);

    void meow();
    void hiss();

signals:

public slots:
};

#endif // FELINE_H
