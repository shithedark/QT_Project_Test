#include "datamodel.h"
#include <QtLogging>
#include <stdio.h>
#include <stdlib.h>

dataModel::dataModel(QObject* parent)
    :QObject(parent)
{}



dataModel::~dataModel(){

}


void dataModel::setNumber(int newNumber){
    dataModel::number = newNumber;
    emit numberChanged(newNumber);
}

void dataModel::setValue(int newNumber){
    dataModel::number = newNumber;
    qDebug("asdasd");
    emit numberChanged(newNumber);
}


int dataModel::getNumber(){
    return dataModel::number;
}
