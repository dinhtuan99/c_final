#ifndef CUASONGUOIDUNG_H
#define CUASONGUOIDUNG_H

#include <QtWidgets>
#include <QtNetwork>
#include "ui_CuaSoNguoiDung.h"
#include <QDebug>
class Client : public QWidget, private Ui::CuaSoNguoiDung {
    Q_OBJECT

    public:
        Client();
       // Q_PROPERTY(QString message READ getMessage WRITE setMessage NOTIFY messageChanged)
    private slots:
        void anNutKetNoi();
        void anNutGuiTin();
        void anEnterGuiTin();
        void nhanDuLieu();
        void ketNoi();
        void ngatKetNoi();
        void loiSocket(QAbstractSocket::SocketError loi);
//        QString getMessage();
//        void setMessage(QString message);
    private:
        QTcpSocket *socket; // May chu
        quint16 size;
        QString nickName;
};

#endif
