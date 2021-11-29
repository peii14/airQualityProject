

#ifndef MAP_MARKER_H
#define MAP_MARKER_H

#include <QAbstractListModel>
#include <QtPositioning/QGeoCoordinate>
#include <iostream>
#include <QDebug>
#include <QStack>
#include <QFile>
#include <QJsonObject>

class Marker : public QAbstractListModel
{
Q_OBJECT
    Q_PROPERTY(QGeoCoordinate current READ current NOTIFY lastMark)
public:
    enum marker_model{
        PositionRole = Qt::UserRole+1
    };
    explicit Marker(QObject *parent = nullptr);
    int rowCount(const QModelIndex &parent) const override;
    QVariant data(const QModelIndex &index, int) const override;
    QHash<int, QByteArray> roleNames() const override;
    QGeoCoordinate current() const;
    Q_INVOKABLE void  addMarker(const QGeoCoordinate &coordinate);

signals:
    void lastMark();
public slots:
    void saveData();
    void removeLastMarker();
    void loadData();

private:
    QStack<struct QGeoCoordinate> m_coordinates;
    QGeoCoordinate currentCoordinate;


};


#endif //MAP_MARKER_H
