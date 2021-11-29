

#include "marker.h"

Marker::Marker(QObject *parent)
        : QAbstractListModel(parent)
{

}


int Marker::rowCount(const QModelIndex &parent = QModelIndex()) const
{
    Q_UNUSED(parent)
    return m_coordinates.count();
}

QVariant Marker::data(const QModelIndex &index, int role = Qt::DisplayRole) const
{
    if (index.row() < 0 || index.row() >= m_coordinates.count())
        return QVariant();
    if (role == marker_model::PositionRole)
        return QVariant::fromValue(m_coordinates[index.row()]);
    return QVariant();
}

QHash<int, QByteArray> Marker::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[PositionRole] = "position";
    return roles;
}
QGeoCoordinate Marker::current() const
{
    return currentCoordinate;
}

Q_INVOKABLE void Marker::addMarker(const QGeoCoordinate &coordinate) {
    beginInsertRows(QModelIndex(), rowCount(), rowCount());
    m_coordinates.push(coordinate);
    qDebug() << "in addmarker"<< m_coordinates;

    endInsertRows();
}

void Marker::removeLastMarker(){
    if(m_coordinates.isEmpty())
        qDebug()<<"empt";
    else {
        beginRemoveRows(QModelIndex(), rowCount()- 1, rowCount() - 1);
        m_coordinates.pop();
        qDebug()<<"in delet"<<&m_coordinates;
        endRemoveRows();
    }
}
void Marker::saveData() {

    QFile file;
    file.setFileName("/wpt.json");
//    if(!file.open(QIODevice::ReadWrite | QIODevice::Truncate))
//        QMessageBox::information(this, tr("Can't Open File"), file.errorString());
    QJsonObject json;

//    for(int i=0;i<rowCount();i++){
//        json[QString("waypoint%1").arg(i)] = m_coordinates;
//    }
}
void Marker::loadData(){
    QFile file;

}
