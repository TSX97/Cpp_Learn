#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include <QString>
#include <QTimer>


class Backend : public QObject {

Q_OBJECT

Q_PROPERTY(QString currentTime READ getCurrentTime WRITE setCurrentTime NOTIFY currentTimeChanged FINAL)
Q_PROPERTY(int counter READ getCounter WRITE setCounter NOTIFY counterChanged FINAL)

public:

    explicit Backend(QObject* parent = nullptr);

    QString getCurrentTime() const;
    int getCounter() const;

    Q_INVOKABLE void incrementCounter();
    Q_INVOKABLE void resetCounter();

public slots:

    void setCurrentTime(const QString& currentTime);
    void setCounter(int counter);

    void updateTime();

signals:

    void currentTimeChanged();
    void counterChanged();

private:
    QString m_currentTime;
    int m_counter = 0;

    QTimer m_timer;
};
#endif // BACKEND_H
