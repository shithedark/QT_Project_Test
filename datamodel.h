#ifndef DATAMODEL_H
#define DATAMODEL_H

#include <QObject>
#include <QQmlEngine>

class dataModel: public QObject
{
    Q_OBJECT
    QML_ELEMENT
    Q_PROPERTY(int number MEMBER number READ getNumber WRITE setNumber NOTIFY numberChanged)
public:
    dataModel(QObject *parent = 0);
    ~dataModel();
public:
    void setNumber(int newNumber);
    int getNumber();

signals :
    void numberChanged(int newNumber);

private:
    int number = 0;

public slots :
  void setValue(int value);
};

#endif // DATAMODEL_H
