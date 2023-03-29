#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H

#include <QWidget>
#include <QEventLoop>
#include <QTimer>

namespace Ui {
class Authorization;
}

class Authorization : public QWidget
{
    Q_OBJECT

public:
    explicit Authorization(QWidget *parent = nullptr);
    ~Authorization();

private:
    Ui::Authorization *ui;
    enum AnswerVariants {
        FAILURE = -1,
        SUCCESS = 1,
        PASS_ERR = -2
    };

    void Delay(const int ms);

private slots:
    void AuthWinShow();

    void on_in_reg_win_clicked();
    void on_sign_in_clicked();

    void AcceptAuthAnswer(const int auth_answer);

signals:
    void RegWinCall();

    void AuthStart(const QString login, const QString password);
    void AuthSuccessful();
};

#endif // AUTHORIZATION_H
